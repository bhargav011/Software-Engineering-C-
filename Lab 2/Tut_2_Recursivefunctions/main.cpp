#include <iostream>
/*
 * SHAH Bhargav & DUDHAGARA AkshayKumar
 * num = input a number
 *
 */

using namespace std;

int isPrime(int num,int i) // create a function
{

    if(i==1)
    {
        return 1;
    }
    else
    {
       if(num%i==0)
         return 0;
       else
         isPrime(num,i-1);
    }
}

int isprime1(int num, int i=2) // i value is fix

{
    //cout << num << " " << i<< endl;
    if(num%i == 0) // if number is not prime
    {
        cout << "Number is not prime" << endl;
        return 0;
    }
    else
    {
        if((i>num/2))
            return 1;
        else
            isprime1(num, i+1);
    }
}

int main()
{
int num, prime;
cout << "Enter the value for which you need to find if it is prime number" << endl;
cin >> num;
prime = isprime1(num);

if(prime==1)
    cout<< " is a prime number"<< num;
else
    cout<< " is not a prime number"<<num;
}
