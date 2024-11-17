#include "laczenie_znakow.h"
#include <stdio.h>
#include <string.h>

void getUserNameSurname(char dataArray[][50], char forms[][50],int limit) {
    // czyszczenie bufora poneiwaz bez tego nie mozna bylo podac formy grzecznosciowej od razu rpzechodzilo do imienia dziei temu wszystko dziala
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    strncpy(forms[0], "Forma grzecznosciowa (Pan/Pani):", limit - 1);
    forms[0][limit - 1] = '\0'; //usuniecie znaku nowej liniii

    strncpy(forms[1], "Sz.", limit - 1);
    forms[1][limit - 1] = '\0';

    strncpy(forms[2], "Imie:", limit - 1);
    forms[2][limit - 1] = '\0';

    strncpy(forms[3], "Nazwisko:", limit - 1);
    forms[3][limit - 1] = '\0';

    printf("%s", forms[0]);
    fgets(dataArray[0], limit, stdin);
    dataArray[0][strlen(dataArray[0]) - 1] = '\0';

    printf("%s", forms[2]);
    fgets(dataArray[1], limit, stdin);
    dataArray[1][strlen(dataArray[1]) - 1] = '\0';

    printf("%s", forms[3]);
    fgets(dataArray[2], limit, stdin);
    dataArray[2][strlen(dataArray[2]) - 1] = '\0';
}
