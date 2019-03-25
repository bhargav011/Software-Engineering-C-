#include<iostream>
#include<math.h> //declare a set of function to compute common mathematical operations and transformations
#include<stdio.h>
using namespace std;
/*
 *SHAH Bhargav & DUDHAGARA Akshay
 *  complex num eq = z = a + ib (a, b)
 * a = first parameter of complax number
 * b = second parameter of complex number
 * p = magnitude of complex number
 * theta = angle of complex number in polar form
 */

double & CartesianToPolar(double a, double b)
{
    double p = sqrt(a*a + b*b); // modulus
    double theta = atan(b/a);   //inbuid function compute arc tangent with two parameters

    return (p, theta); // return values

}

int main()
{
     double a, b, c, d;
     cout << "Enter value of a and b: " << endl;
     cin >> a >> b;
     (c, d) = CartesianToPolar(a, b);
     cout << "value of modulus and arctan is: " << c << " " << d << endl;
     return 0;


}
