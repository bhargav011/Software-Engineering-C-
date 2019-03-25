#include <iostream>
using namespace std;


//SHAH Bhargav & DHUDHAGARA Akshay

// use double for taking higher value (we can use integer also)
double Factorial(unsigned int n) //creat a function of factorial
{
    if (n > 1)
        return n * Factorial(n - 1); // n is positive variable
    else
        return 1;
}

double Combination(unsigned int n, unsigned int k) //create a function of combination
{
    // calculation according to binomial coefficient
    double n_factorial = Factorial(n); //get value of n factorial
    double k_factorial = Factorial(k); //get value of k factorial
    double nk_factorial = Factorial(n-k); // eq of binomial coefficient

    return n_factorial / (k_factorial * nk_factorial); //return the value
}

int main()
{

   cout << "combination : " << Combination(49, 6) << endl; // print the value (n = 49 and k = 6)
   return 0;

}
