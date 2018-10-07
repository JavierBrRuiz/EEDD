#include "mcd.h"

int mcd (int a, int b){
    int n, m, r;
    n = a;
    m = b;

    while (m != 0){
        r = n % m;

        n = m;
        m = r;

    }

    return n;
}
