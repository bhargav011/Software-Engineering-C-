#include <iostream>
using namespace std;
/*
    SHAH Bharagv & DUDHAGARA Akshay
    In fibonacci the first two number is o and 1 and each subsequence number is the sum of the previous two(t1 and t2)
    n is positive interger of fibonacci sequence

 */

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of term: ";
    cin >> n; // enter number of value  //here enter the howmany term you want(Ex: 10)

    cout << "Fibonacci Series: ";

    for(int i = 1; i <= n; ++i) // increment of i
    {
        if(i == 1) // check the condition
        {

            cout << " " << t1; // print t1(0)
            continue; //acts as goto continue
        }

        if(i == 2) // check the condition
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }
    return 0;

}
