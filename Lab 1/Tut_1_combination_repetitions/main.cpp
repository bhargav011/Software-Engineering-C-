#include <iostream>
using namespace std;


//SHAH Bhargav & DUDHAGARA Akshay

// use double for taking higher value (we can use integer also)
double Factorial(unsigned int n) //creat a function of factorial
{
    if (n > 1)
        return n * Factorial(n - 1); // n is positive variable
    else
        return 1;
}
double CombinationsReptitions(unsigned int n, unsigned int k) //function fo Comvinations reptitions
{
    double up = Factorial(n + k - 1); //calculating the factorial using n and k accourding to given eq
    double down = Factorial(k) * Factorial(n - 1); // calculating the factorial using n and k accourding to given eq
    return up / down; //return value
}
int main()
{
    cout << "combination_reptitions:" << CombinationsReptitions(5,6) << endl; //print and call the function and return
    return 0;
}
