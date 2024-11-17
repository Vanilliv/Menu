#include "logarytmy.h"
#include <stdio.h>
#include <math.h>

void logarithmTable(double m){
    // tablica i liczba elementow
    int elementsNumber = (int)(m / 0.1) + 1;
    double logArray[elementsNumber];

    for (int i = 0; i < elementsNumber; i++) {
        logArray[i] = log10(0.1 * i);
    }

    printf("Tablica logarytmow dziesietnych:\n");
    for (int i = 0; i < elementsNumber; i++) {
        // do 4 miejsc po przecinku
        printf("log10 z liczby %.1f = %.4f\n", 0.1 * i, logArray[i]);
    }
}