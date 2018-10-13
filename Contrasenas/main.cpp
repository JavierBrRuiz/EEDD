#include "Contrasena.h"
#include "caracteres.h"
#include <iostream>
#include <cstdlib>
int main (){
    srand(time(0));

    Contrasena *c1 = new Contrasena();    
    Contrasena *c2 = new Contrasena(6);
    
    char car[8] = {'p','a','s','s','w','o','r','d'};
    char *c;
    c = car;

    bool ec, ef, ecrr;
    ec = c1->es_Contrasena(8);
    ef = c1->es_Fuerte();
    ecrr = c1->es_Correcta(car);
    std::cout << "ec, ef, ecrr\n" << ec << ef << ecrr << "\n";
    std::cout << "Mostrando c1\t";
    c1->Mostrar();
    std::cout << "Cifrando c1 -----------------\n";
    c1->cifrar_Contrasena();
    std::cout << "Mostrando c1 cifrada\t";
    c1->Mostrar();
    std::cout << "Descifrando c1 -----------------\n";
    c1->descifrar_Contrasena();
    std::cout << "Mostrando c1 descifrada\t";
    c1->Mostrar();
    
    std::cout << "Constructor (6)\n";
    c2->Mostrar();
    
}
