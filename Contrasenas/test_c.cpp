#include "caracteres.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

int main (){
    srand(time(0));
    char c1, c2, c3, c4, c5;
    int i;

    c1 = 'a';
    c2 = 'A';
    c3 = '4';
    
    std::cout << es_Minus(c2) << es_Mayus(c1) << es_Digito(c3);
    for (i = 0; i < 10; i++){
        c5 = rand_Num();
        c4 = rand_Char();

        std::cout << c5 << c4 << "\n";
    }
}
