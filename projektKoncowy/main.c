#include <stdio.h>
#include <stdlib.h>
//Podlaczenie kolejno bibliotek
#include "laczenie_znakow.h"
#include "d2b.h"
#include "logarytmy.h"
#include "struktury.h"

int main() {
    int choice;
    do{
        printf("Wybierz z jakiej operacji chcesz skorzystac:\n");
        printf("1.Tablica logarytmow dziesietnych\n");
        printf("2.Laczenie lancuchu znakow\n");
        printf("3.D2B\n");
        printf("4.Obliczenia z wykorzystaniem struktur\n");
        printf("0.Wyjdz z aplikacji\n");
        printf("Twoj wybor:");
        scanf("%d",&choice);

        switch (choice) {
            case 1: // liczenie tablic logarytmow z przedzialu
                printf("Wybrano Tablice logarytmow:\n\n");
                double m;
                printf("Tablica logarytmow dziesietnych w przedziale <0,m>\nPodaj m: ");
                scanf("%lf", &m);
                logarithmTable(m);
                break;
            case 2: // laczenie znakow zwroty i podane wartosci
                //inicjalizacja tablic do laczenia znakow
                int limit = 50;
                char dataArray[3][50];
                char forms[4][50];

                printf("Wybrano laczenie znakow:\n\n");
                getUserNameSurname(dataArray,forms,limit);
                printf("\n%s%s %s%s %s%s\n\n", forms[1], dataArray[0], forms[2], dataArray[1], forms[3], dataArray[2]);
                break;
            case 3: //Zmodyfikowana funkcja d2b
                printf("D2B\n");
                //inicjalizacja do d2b
                int number;
                int arrayWithBinary[32];

                printf("Podaj liczbe dziesietna: ");
                scanf("%d", &number);
                d2b(number,arrayWithBinary);
                printf("Binarna postac liczby %d:",number);
                for (int i = 0; i< 32; i++){
                    printf("%d",arrayWithBinary[i]);
                }
                printf("\n");
                break;
            case 4: // Operacje na tablicach struktur
                printf("Wybrano obliczenia ze strukturami:\n\n");
                int n = getN();
                //alokacja
                CalculationResults *infoArray = malloc((n + 1) * sizeof(CalculationResults));
                calculationsOnStructures(infoArray,n);
                //wynik
                printf("Program obliczajacy dla zadanego n wartosci n^2 i sqrt(n)\n");
                for (int i = 0; i < n; i++) {
                    printf("n = %d, n^2 = %d, sqrt(n) = %.6f\n",
                           infoArray[i].n, infoArray[i].square_n, infoArray[i].square_root_n);
                }
                //zwolnieie alokacji
                free(infoArray);
                break;
            case 0: // wylaczenie aplikacji
                printf("Do zobaczenia!\n");
                break;
            default: // kazdy inny wybor niz od 0 do 4
                printf("Nieprawidlowy wybor!\n");
                break;
        }
    } while (choice !=0);
    return 0;
}
