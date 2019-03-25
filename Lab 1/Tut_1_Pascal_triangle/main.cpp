#include<iostream>
using namespace std;
/*
 * Pascal Triagle is a triangualar array of the binomial coefficients
 *
 */
int main()
{
    int rows;  // positive int of row of pascal

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << endl;

    for(int i = 0; i < rows; i++) //looping to print pascal lines
    {
        int val = 1; //first number of pascal
        for(int j = 1; j < (rows - i); j++) //looping to print pascal triangle
         {
           cout <<  " ";
        }
        for(int k = 0; k <= i; k++) //calculation of tringulation
        {
            cout << " " << val;
            val = val*(i-k)/(k+1);
        }
        cout << endl << endl;

    }
    cout << endl;
    return 0;


}
