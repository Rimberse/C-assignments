#include "2DR.h"
#include <stdio.h>
#include <stdlib.h>

void test() {
    double** array = allocate(2, 2);
//    double** array = malloc(2 * sizeof(double*));
//    allocateV(2, 2, array);
//    printf("%d\n", (int) (sizeof(array) / sizeof(array[0])));

    fill(&array);
    display(array);
    deAllocate(array);
//    display(array);
}