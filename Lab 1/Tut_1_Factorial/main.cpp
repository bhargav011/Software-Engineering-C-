#include <iostream>
using namespace std;


//SHAH Bhargav

// use double for taking higher value (we can use integer also)
double Factorial(unsigned int n) //creat a function of factorial
{
    if (n > 1)
        return n * Factorial(n - 1); // n is positive variable
    else
        return 1;
}
int main()
{
   int n;
   cout << "enter a positive interger: ";
   cin >> n;
   cout << "Factorial of " << n << " = " <<Factorial(n) << endl; //call the factorial function and print the value
   return 0;

}
