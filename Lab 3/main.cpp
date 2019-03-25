#include <QCoreApplication>
#include <iostream>
using namespace std;
#include "labs3.h"

int main()
{

    // Exercise 1
    cout << "LAB 3: Vectors and Matrices" << endl;
    cout << "Submitted by Bhargav SHAH and Akshaykumar DUDHAGARA" << endl;
    cout << "Guided by Yohan Fougerolle " << endl;
    cout << endl;
    cout << endl;

    cout << "Exercise 1" << endl;
    int n;int *a;int *b;
    cout << "Enter the number of elements" << endl;
    cin >> n;

    // Memory allocation
    a = new int[n];
    b = new int[n];

    int a_index = 0, b_index = 0;

    for(int i=0;i<2*n;i++)
    {
        if(i%2==0) // a will be filled with even number
        {
            a[a_index] = i;
            a_index++;
        }
        else // b will be filled with odd number
        {
            b[b_index] = i;
            b_index++;
        }
    }

    // Display Info for pointer
    DisplayPointerInfo(a,b,n);



    // Exercise 2

    cout << endl;
    cout << "Exercise 2" << endl;
    cout << "Swaps two variables represented by pointers" << endl;

    // Randomly take c1=5 and d1=7
    int c1(5),d1(7);
    int *c = &c1, *d = &d1;

    // Before Swapping
    cout << "Before Swapping:" << " c=" << *c << "," << " d=" << *d << endl;

    // Swaps two variables represented by pointers
    Swap1(c,d);

    // After Swapping
    cout << "After Swapping:" << " c=" << *c << "," << " d=" << *d << endl;

    // Swaps all the values of two arrays represented by pointers
    cout <<endl;
    cout << "Swaps all the values of two arrays represented by pointers" << endl;
    cout << "Before Swapping:" << endl;

    // Use exe.1,Display Info for pointer
    DisplayPointerInfo(a,b,n);

    SwapArray( a, b, n);

    cout << endl;
    // After Swapping
    cout << "After Swapping:" << endl;

    // If Pointer is located at 'a'
    cout << "Pointer is located at " << a << endl;
    for(int i(0); i<n ; i++)
    {
        cout << "Value at Index " << i << " is " << a[i] << endl;
    }

    // If Pointer is located at 'b'
    cout << "Pointer is located at " << b << endl;
    for(int i=0; i<n;i++)
    {
        cout << "Value at index " << i << " is " << b[i] << endl;
    }

 /* {
        int a[] = {2,4,6,8,10};
        int b[] = {1,3,5,7,9};
        cout << "Before call:" << endl;
        for(int i=0; i<5 ; i++)
        {
            cout << "value of a at index " << i << " is " << a[i] << endl;
        }
        for(int i=0; i<5 ; i++)
        {
            cout << "value of b at index " << i << " is " << b[i] << endl;
        }
        swapArray(a,b,5);
        cout << "After call:" << endl;
        for(int i=0; i<5 ; i++)
        {
            cout << "value of a at index " << i << " is " << a[i] << endl;
        }
        for(int i=0; i<5 ; i++)
        {
            cout << "value of b at index " << i << " is " << b[i] << endl;
        }

    }

*/

    // Exercise 3

    cout << endl;
    cout << "Exercise 3" << endl;
    cout << "1. Pointer to an array of n integers" << endl;

    int * ptr;
    ptr = CreateArray(n);
    DisplayPointerInfo(ptr,ptr,n);

    //deleteArray(ptr); // could not print because array is deleted

    cout << endl;
    cout << "2. Pointer to an array of arrays of n*m floats" << endl;
    float ** p = CreateMatrix(n,n); // To create matrix

    //deleteMatrix(p,n,m);

    DisplayMatrix(p,n,n); // To display matrix


    // Exercise 4

    cout << endl;
    cout << "Exercice 4"<<endl;

    float *P = new float[3];
    float *Q = new float[3];


    P[0] = 1; P[1] = 1; P[2] = 0; // P = (1,1,0)
    Q[0] = 1; Q[1] = 1; Q[2] = 1; // Q = (1,1,1)

    // Dot product
    cout << "Dot Product is:" << endl;
    cout<< dot_product(P,Q,3) << endl;

    // Inner product
    float *R = inner_product(P,Q,3);
    for (int i=0; i<n; i++, R++)
    {
        cout << "value at index"<< i << " is "<< *R <<endl;
    }


    // Exercise 5

    cout << endl;
    cout << "Exercice 5" << endl;

    int r1,col1,r2, c2,i, j;
    int D[5][5], E[5][5];

    // Create Matrix A
    cout << "Enter number of rows and columns of matrix A : ";
    cin >> r1 >> col1;

    // Create Matrix B
    cout << "Enter number of rows and columns of matrix B : ";
    cin >> r2 >> c2;

    if (col1 != r2)
    {
        cout << "Matrices cannot be multiplied!";
        exit(0);
    }

    // Storing element of Matrix A
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < r1; i++)
       for (j = 0; j < col1; j++)
           cin >> D[i][j];

    // Storing element of Matrix B
    cout << "Enter elements of matrix B : ";
    for (i = 0; i < r2; i++)
       for (j = 0; j < c2; j++)
           cin >> E[i][j];

    // Product of Two matrices
    cout << "Product of matrices\n";
    MatrixProduct(r1, r2, col1, c2, D, E);



    return 0;

}
