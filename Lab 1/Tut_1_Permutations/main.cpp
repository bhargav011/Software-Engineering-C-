#include<iostream>
using namespace std;


//SHAH Bhargav % DUDHAGARA Akshay

// use double for taking higher value (we can use integer also)
double Factorial(unsigned int n) //creat a function of factorial
{
    if (n > 1)
        return n * Factorial(n - 1); // n is positive variable
    else
        return 1;
}

double Permutations(unsigned int n, unsigned int k) // create a function of Permutation
{
    //as  per the equation
    double Top = Factorial(n);
    double Down = Factorial(n - k);
    return Top / Down;
}

int main()
{
    cout << "permutations value : " << Permutations(54,5) << endl; //call the function and print value
    return 0;
}
