#ifndef LABS3_H
#define LABS3_H

// Exercise 1: Pointers as Arrays
void DisplayPointerInfo(int*, int*, int n=0);

// Exercise 2: Swapping values of arrays represented by pointers
void Swap1(int*, int*);
void SwapArray(int*,int*, int);

// Exercise 3: Allocation and deallocation of monodimensional and bidimensional arrays represented by pointers
int* CreateArray(int n);
void deleteArray(int*a[]);

float** CreateMatrix(int n ,int m );
void deleteMatrix(float**, int n, int m);

void DisplayMatrix(float**, int n, int m);

// Exercise 4: A little bit of geometry
float dot_product ( float *, float *, int n);
float *inner_product (float*, float*, int n);

// Exercise 5: Matrix multiplication in the general case
void MatrixProduct(int r1,int r2, int col1,int c2,int D[][5],int E[][5]);

#endif // LABS3_H
