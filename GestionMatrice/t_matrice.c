#include "t_matrice.h"
#include "../GestionTableau2D/2DR.h"
#include <stdio.h>
#include <stdlib.h>

struct t_matrice* allocateMatrix(int rows, int columns) {
    t_matrice* matrix = NULL;
    matrix = (t_matrice*) malloc(sizeof(t_matrice));
    matrix -> rows = rows;
    matrix -> columns = columns;
    matrix -> coefficients = allocate(rows, columns);
    return matrix;
}

void fillCoefficients(t_matrice matrix) {
    fill(matrix.coefficients);
}

void displayMatrix(t_matrice matrix) {
    display(matrix.coefficients);
}

t_matrice* multiplyMatrix(t_matrice matrix1, t_matrice matrix2) {
    t_matrice* matrix = allocateMatrix(matrix1.rows, matrix2.columns);

    if (matrix1.columns != matrix2.rows)
        return NULL;

    for (int i = 0; i < matrix1.rows; i++) {
        for (int j = 0; j < matrix1.columns; j++) {
            double product1, product2, a, b;

            for (int k = 0; k < matrix2.rows; k++) {
                a = matrix1.coefficients [i][k];
                b = matrix2.coefficients [k][j];
                product1 = a * b;

                matrix -> coefficients[i][j] = product1 + product2;
                product2 = product1;
            }

            product2 = 0;
        }

        printf("\n");
    }

    return matrix;
}

void deAllocateMatrix(t_matrice matrix) {
    deAllocate(matrix.coefficients);
}
