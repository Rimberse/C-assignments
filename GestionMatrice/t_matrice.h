#ifndef SE_TP1_T_MATRICE_H
#define SE_TP1_T_MATRICE_H

typedef struct {
    int rows;
    int columns;
    double** coefficients;
} t_matrice;

struct t_matrice* allocateMatrix(int rows, int columns);
void fillCoefficients(t_matrice matrix);
void displayMatrix(t_matrice matrix);
t_matrice* multiplyMatrix(t_matrice matrix1, t_matrice matrix2);
void deAllocateMatrix(t_matrice matrix);

#endif //SE_TP1_T_MATRICE_H
