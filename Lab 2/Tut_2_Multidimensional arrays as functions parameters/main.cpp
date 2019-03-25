#include <iostream>
using namespace std;
/*
 * SHAH Bhargav & DUDHAGARA AkshayKumar
 *
 */


void  MultMatrix(int A[3][3],int B[3][3],int C[3][3]) // Create a statically allocated MultMatrix function
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
             C[i][j] = 0;

                for(int k = 0; k < 3; k++)
                {
                  C[i][j]+=A[i][k]*B[k][j];
                }
        }
    }
}


int main()

{
    int A[3][3] = {{1,0,0},{0,1,0},{0,0,1}};  // Elements of Matrix A
    int B[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // Elements of Matrix B
    int C[3][3];

// For Matrix A
    cout << "Matrix A is: " << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
        cout << A[i][j] << " ";
        }

        cout << endl;
    }

// For Matrix B
    cout << "Matrix B is: " << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
        cout << B[i][j] << " ";
        }
        cout << endl;
    }

// Call MultMatrix function
    MultMatrix(A,B,C);

    //Final output in Matrix C
    cout << "Matrix C is: " << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
        cout << C[i][j] << " ";
        }
    cout << endl;
    }

    return 0;

}




