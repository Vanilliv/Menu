#ifndef STRUKTURY_H
#define STRUKTURY_H

typedef struct {
    int n;
    double square_root_n;
    int square_n;
} CalculationResults;

int getN();
void calculationsOnStructures(CalculationResults *infoArray, int n);

#endif
