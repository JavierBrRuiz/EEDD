#include <stdlib.h>
#include <time.h>
#include "caracteres.h"


char rand_Char(){
    int binary_choice;
    char r;
    int ctoi;

    binary_choice = rand() % 2;

    if (binary_choice == 0) {
        ctoi = (rand() % MOD_CHAR) + RANG_MAYUS;
    }
    else {
        ctoi = (rand() % MOD_CHAR) + RANG_MINUS;
    }

    r = ctoi;

    return r;
}

bool es_Minus(char c){
    int ctoi = c;

    return (ctoi >= 97 && ctoi <= 122);
}

bool es_Mayus (char c){
    int ctoi = c;

    return (ctoi >= 65 && ctoi <= 90);
}
bool es_Digito(char c){
    int ctoi = c;

    return (ctoi >= 48 && ctoi <=57);
}
char rand_Num(){
    int r;
    char itoc;
    

    r = (rand() % MOD_NUM) + RANG_NUM;
    itoc = r;
    return itoc;
}
