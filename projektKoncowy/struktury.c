#include <stdio.h>
#include "math.h"
#include "struktury.h"

int getN(){
    int n;
    int helpVal; //zmienna pomocnicza do DoWhile

    do {
        printf("Podaj liczbe calkowita n z przedzialu 0-100: ");
        helpVal = scanf("%d", &n);

        while (getchar() != '\n');

        if (n < 0 || n > 100) {
            printf("To nie jest liczba z przedzialu.\n");
            helpVal = 0; // ustawienie na 0 zeby petla sie powtorzytla
        }
    } while (!helpVal);
    return n;
}

void calculationsOnStructures(CalculationResults *infoArray, int n){
    for (int i = 0; i < n; i++) {
        infoArray[i].n = i;
        infoArray[i].square_root_n = sqrt(i);
        infoArray[i].square_n = i * i;
    }
};