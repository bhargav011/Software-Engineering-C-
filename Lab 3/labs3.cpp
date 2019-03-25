#include <iostream>
using namespace std;
#include "Labs3.h"

// Exercise 1: Pointers as Arrays
// Declare two integer pointers a and b to dynamically allocate arrays of integers for n elements
void DisplayPointerInfo(int *a, int *b, int n)
{


     // If Pointer is located at 'a' then value at each index is even numbers
    cout << "The address of a Pointer is" << a << endl;
    for(int i = 0; i < n; i++, a++)
    {
        cout << "Value at Index " << i << " is " << *a << endl;
    }

    /*
        // Using []
        for (int i = 0; i < n; i++)
        {
             cout << "Value at Index " << i << " is " << a[i] << endl;
        }
    */

    // If Pointer is located at 'b' then value at each index is odd numbers
    cout << "The address of a Pointer is " << b << endl;
    for(int i = 0; i < n; i++, b++)
    {
        cout << "Value at Index " << i << " is " << *b << endl;
    }
    /*
        // Using []
        for (int i = 0; i < n; i++)
        {
             cout << "Value at Index " << i << " is " << b[i] << endl;
        }
    */
}


// Exercise 2: Swapping values of arrays represented by pointers
// Declare a function swap1(...) that swaps two variables represented by pointers
void Swap1(int *c, int *d) // Two Variables c and d which are represented by pointers
{
    int akkibhargav = *c;
    *c = *d;
    *d = akkibhargav;
    /* *c = *c + *d;
       *d = *c - *d;
       *c = *c - *d; */
}

// Declare a function SwapArray(...) that swaps all the values of two arrays represented by pointers
void SwapArray(int *a, int *b, int n)
{
    for(int i = 0; i < n; i++)
    {
        int akkibhargav = a[i];
        a[i] = b[i];
        b[i] = akkibhargav;
        /* a[i] = a[i] + b[i];
           b[i] = a[i] - b[i];
           a[i] = a[i] - b[i]; */


          // without using []
           /*
                for( int i = 0; i < n; i++, a++, b++)
                    {
                       Swap1(a,b);
                    }
            */
    }
}


// Exercise 3: Allocation and deallocation of monodimensional and bidimensional arrays represented by pointers
// 1.Declare a function CreateArray(...) that returns a pointer to an array of n integers
int * CreateArray(int n) // Create array
{
    //static int a[] = {1,2,3,4,5}; return a;

    return (new int [n]);
}

void deleteArray(int*a[]) // Delete array
{
    delete [] a;
}

// 2.Declare a function CreateMatrix(...) that returns a pointer to an array of arrays of n*m floats
float ** CreateMatrix(int n, int m) // create matrix
{
    float**array = new float*[n];
    for(int i = 0; i < n; i++)
        array[i] = new float[m];
//    for(int i = 0; i < m; i++)
//        for(int j = 0; j < n; j++)
//          array[i][j] = ((i*n)+j);
    return array;
}

void deleteMatrix(float **array, int n, int m) // detete matrix
{
    for(int i = 0; i < n; i++)
        delete [] array[i];
    delete [] array;
}

// 3.Declare a function DisplayMatrix(...) that displays the address of the matrix of floats
void DisplayMatrix(float **av, int n, int m) // display matrix
{
    cout << "Address of matrix of floats is" << av << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout<< av[i][j] << " ";
        cout << endl;
    }
}

// Exercise 4:  A little bit of geometry
// Declare functions to compute the dot product
float dot_product ( float *a, float *b, int n)
{
    float product(0);
    for (int i = 0; i < n; i++)
        product += a[i]*b[i]; // dot product of a and b is a*b

    return product;

    // without using []
    /*
      for (int i = 0; i < n; i++, a++, b++)
          product += (*A)*(*B);
    */
}

// Declare functions to compute the inner product
float *inner_product(float *a, float *b, int n)
{
    if ( n!= 3)
        return NULL;

    float *product = new float[3];
    // calculate inner product
    product[0] =  a[1] * b[2] - a[2]*b[1];
    product[1] =  a[2] * b[0] - a[0]*b[2];
    product[2] =  a[0] * b[1] - a[1]*b[0];
}


// Exercise 5: Matrix multiplication in the general case
// Declare a function MatrixProduct(...) that returns the matricial product of two matrices of arbitraty dimensions
void MatrixProduct(int r1, int r2, int col1, int c2, int D[][5], int E[][5])
{
    int i, j, k;
    int C[r1][c2];
// Using for loop multiplying two matrices
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < r2; k++)
            {
                *(*(C + i) + j) += *(*(D + i) + k) *
                                   *(*(E + k) + j);
                //C[i][j] += D[i][k] * E[k][j];
            }
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << *(*(C + i) + j) << " ";
        }
        cout << "\n";
    }

}
