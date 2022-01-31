#ifndef SE_TP1_2DR_H
#define SE_TP1_2DR_H

double** allocate(int rows, int columns);
void allocateV(int rows, int columns, double** array);
void fill(double** array);
void display(double** array);
void deAllocate(double** array);

#endif //SE_TP1_2DR_H