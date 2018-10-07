#include "Fraccion.h"
#include <iostream>
#include "mcd.h"

using namespace std;

Fraccion::Fraccion(){
    
}

Fraccion::Fraccion (int num, int den){
    numerador = num;
    if (den != 0){
        denominador = den;
    }else{
        denominador = 1;
    }

}
Fraccion::~Fraccion(){
}

void Fraccion::Suma (Fraccion& f2){ 
    int mcd;
    if (f2.denominador == denominador){
        numerador += f2.numerador;
    }
    else{
        int aux = denominador * f2.denominador;
        numerador = (aux / denominador)*numerador + (aux / f2.denominador)*f2.numerador;
        denominador = aux;
    }
    mcd = mcd (numerador, denominador);
    numerador /= mcd;
    denominador /= mcd;
}

void Fraccion::Producto (Fraccion& f2){
    numerador *= f2.numerador;
    denominador *= f2.denominador;

     mcd = mcd (numerador, denominador);      
     numerador /= mcd;
     denominador /= mcd;
}

void Fraccion::Mostrar (){
    cout << "Numerador: " << numerador << endl;
    cout << "Denominador: " << denominador << endl;
}
