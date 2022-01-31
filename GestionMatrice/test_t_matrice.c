//
// Created on 24-Jan-22.
//

#include "t_matrice.h"
#include <stdio.h>
#include <stdlib.h>

void testMatrix() {
    /*t_matrice* matrix1 = allocateMatrix(2, 2);
    t_matrice* matrix2 = allocateMatrix(2, 2);

    fillCoefficients(*matrix1);
    fillCoefficients(*matrix2);
    printf("Matrix multiplication:\n");
    displayMatrix(*matrix1);
    printf("*\n");
    displayMatrix(*matrix2);
    printf("=\n");
    t_matrice* matrix = multiplyMatrix(*matrix1, *matrix2);
    displayMatrix(*matrix);
    deAllocateMatrix(*matrix1);
    deAllocateMatrix(*matrix2);*/

    t_matrice* readMatrix = atomatrice("coefficients.txt");
    displayMatrix(*readMatrix);
}
