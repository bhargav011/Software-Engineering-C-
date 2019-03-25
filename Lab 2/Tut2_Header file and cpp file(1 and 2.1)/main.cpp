#include <iostream>
//#include <string>
#include "fun1.h"
using namespace std;
int main()
{
    /*
     * call the function and use of cin,cout and endl
     */


    int a,b,z;
    cout<< "welcome in Lab2 :" << endl; // Cout is for print a statement and endl is for newline
    cin >> a; // cin is the take the variable value
    cin >> b;


    z = ExampleInputOutput(a,b); //call function
    cout << "The Result Is : " << z << endl;

}


