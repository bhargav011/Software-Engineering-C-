#include <iostream>
/*
 * SHAH Bhargav & DUDHAGARA AkshayKumar
 *
 *
 */
using namespace std;


int ismultipleof(int p, int q = 2) //create a function
{
    cout <<"value of p is: "<< p << " and value of q is " << q << endl;
    if(p % q == 0)
    {
        cout << "p divides q" << endl;
        return 0;
    }
    else
    {
        cout << "p does not divide q" << endl;
        return 0;
    }
}

int main()
{
    //implementing Ismultipleof()
    int p, q;

    cout << "Enter the value of p and q to determines if a number p is a multiple of number q: " << endl;
    cin >> p >> q;

    ismultipleof(p);

    cout << "Simulating value with value of q" << endl;
    ismultipleof(p,q);
}
