#include<iostream>
using namespace std;
/*
 * SHAH Bhargav & DUDHAGARA Akshay
 * declare static and dynamic array with size 10 array with 0 to 9 and printing value inside
 *
 */
void ArrayExample1(void) //create a array function
{
    int array1[10]; // number of element in array
    int * array2 = new int[10];

    for (int i = 0; i < 10; i++)
    {
        array1[i] = i;
        array2[i] = i;

    }
    for (int i = 0; i < 10; i++)
    {
        cout << "array1["<< i << "] value is: "<< array1[i] << endl;
        cout << "array2["<< i << "] value is: "<< array2[i] << endl;

    }


}
 int main()
 {
     ArrayExample1();
     return 0;
 }


