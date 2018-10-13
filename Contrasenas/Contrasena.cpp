#include <iostream>
#include "Contrasena.h"
#include "caracteres.h"
#include <string.h>
#include <stdlib.h>


Contrasena::Contrasena(){
    length = 8; 
    caracteres[length];
    char input;
    int i, bc;
    for (i = 0; i < length; i++){
        bc = rand() % 2;
        if (bc == 0){
            input = rand_Char();
            caracteres [i] = input;
        }
        else{
           input = rand_Num();
           caracteres[i] = input;
        }
    }

}
Contrasena::Contrasena(int _length){
    length = _length;
    caracteres[length];    
    char input;
    int i, bc;
    for (i = 0; i < length; i++){
       bc = rand() % 2;
       if (bc == 0){
           input = rand_Char();
           caracteres [i] = input;
        }
        else{
           input = rand_Num();
           caracteres [i] = input;
        }
    }

}
Contrasena::~Contrasena(){
    
}

bool Contrasena::es_Contrasena(int _length){
    if (length != _length){
        return false;
    }
    else{

        int i, ctoi, cont = 0;
        for (i = 0; i < length; i++){
            ctoi = caracteres[i];
            if ((ctoi <= 57 && ctoi >= 48) || (ctoi <= 90 && ctoi >= 65) ||(ctoi<= 122 && ctoi >=97)){
                cont++;
            }
        }
        return (cont == length);
    }
}
bool Contrasena::es_Fuerte(){
    int i, mayus, minus, digit;
    for (i = 0; i < length; i++){
        if (es_Digito(caracteres[i])){
            digit++;    
        }
        else if(es_Mayus(caracteres[i])){
            mayus++;
        }
        else if(es_Minus(caracteres[i])){
            minus++;
        }
    }
    return (mayus >= 2 && minus >= 1 && digit >= 3);
}

void Contrasena::cifrar_Contrasena(){
    int i, ctoi;

    for (i = 0; i < length; i++){
        ctoi = caracteres[i];
        if (es_Digito(caracteres[i]) &&  ctoi > 54){
            ctoi = (ctoi - MOD_NUM) + 3;

        }
        else if (es_Mayus(caracteres[i]) && ctoi > 87){
            ctoi = (ctoi - MOD_CHAR) + 3;
        }
        else if (es_Minus(caracteres[i]) && ctoi > 119){
            ctoi = (ctoi - MOD_CHAR) + 3;
        }
        else{
            ctoi += 3;            
        }
        caracteres[i] = ctoi;
     

    }
}
void Contrasena::descifrar_Contrasena(){
    int i, ctoi;

    for (i = 0; i < length; i++){
        ctoi = caracteres[i];
        if (es_Digito(caracteres[i]) &&  ctoi < 51){
            ctoi = (ctoi + MOD_NUM) - 3;

        }
        else if (es_Mayus(caracteres[i]) && ctoi < 68){
            ctoi = (ctoi + MOD_CHAR) - 3;
        }
        else if (es_Minus(caracteres[i]) && ctoi < 100){
            ctoi = (ctoi + MOD_CHAR) - 3;
        }
        else{
            ctoi -= 3;            
        }
        caracteres[i] = ctoi;
    }
}

bool Contrasena::es_Correcta(char *caracteres_2){
    int i=0;
    for (caracteres_2; *caracteres_2 != 0; caracteres_2++){
        if (*caracteres_2 != caracteres[i]) return false;

        else{
            i++;
        }
    }
    return true;
}

void Contrasena::Mostrar(){
    std::cout << caracteres << "\n";
}









