#include "Fraccion.h"
#include <iostream>
using namespace std;


int main(){
    Fraccion *f = new Fraccion(3, 2);
    Fraccion *f2 = new Fraccion(5, 7);
    
    f->Mostrar();
    f2->Mostrar();
    cout<<"Sumamos 5/7 a 3/2\n";
    f->Suma(*f2);
    cout << "El resultado es\n";
    f->Mostrar();
    cout << "Ahora multiplicamos por 5/7\n";
    f->Producto(*f2);
    cout << "El resultado es\n";
    f->Mostrar();

    return 0;
}
