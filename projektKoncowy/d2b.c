#include "d2b.h"

void d2b(int liczba,int *arrayWithBinary){
    int k;
    for(int c = 31; c >= 0; c--){
        k = liczba >>c;
        arrayWithBinary[31 - c] = (k & 1) == 1 ? 1:0;
    }
}