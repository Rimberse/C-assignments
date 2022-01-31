#include <stdio.h>
#include <stdlib.h>

int r;
int c;

double** allocate(int rows, int columns) {
    r = rows;
    c = columns;

    // (double**) malloc (rows * sizeof(double*));
    double** array = (double**) malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++)
        array[i] = (double*) malloc(columns * sizeof(double));

    return array;
}

void allocateV(int rows, int columns, double** array) {
    r = rows;
    c = columns;

    for (int i = 0; i < rows; i++)
        array[i] = (double*) malloc(columns * sizeof(double));
}

// (double*** array)
void fill(double** array) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            double value;
            printf("[%d][%d] =", i, j);
            scanf("%lf", &value);

            array [i][j] = value;
        }
    }
}

void display(double** array) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%lf ", array [i][j]);
        }

        printf("\n");
    }
}

void deAllocate(double** array) {
    for (int i = 0; i < r; i++) {
        free(array[i]);
    }

    free(array);
}
