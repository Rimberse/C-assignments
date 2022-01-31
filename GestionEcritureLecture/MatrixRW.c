#include <stdio.h>
#include <stdlib.h>
#define CHUNK 1024

char* readFile(char filename[]) {
    FILE *file;
    size_t nread;
    char *matrix = malloc(CHUNK);

    if (matrix == NULL) {
        printf("Failed to create a pointer");
    }

    file = fopen(filename, "r");

    if (file) {
        while ((nread = fread(matrix, 1, CHUNK, file)) > 0)

        if (ferror(file)) {
            printf("Couldn't read a file...");
        }

        fclose(file);
    }

    return matrix;
}

void writeIntoFile(char* string, char filename[]) {
    FILE *file;
    file = fopen(filename, "w");

    if (file) {
        char *ptr;
        for (ptr = string; *ptr != '\0'; ptr++){
            fprintf(file, "%c", *ptr);
        }

        if (ferror(file)) {
            printf("Couldn't write into file...");
        }

        fclose(file);
    }
}

void copyFile(char inputFile[], char outputFile[]) {
    char* input = readFile(inputFile);
    writeIntoFile(input, outputFile);
}
