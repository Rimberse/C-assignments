//
// Created on 30-Jan-22.
//

#include "MatrixRW.h"
#include <stdio.h>
#include <stdlib.h>

void testMatrixRW() {
    char* matrix = readFile("text.txt");
    printf("Read matrix:\n%s\n", matrix);

    char* wMatrix = "1 2\n3 4";
    writeIntoFile(wMatrix, "output.txt");

    copyFile("text.txt", "output.txt");
}
