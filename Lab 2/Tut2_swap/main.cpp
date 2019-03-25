#include<iostream>
#include "fun2.h"
using namespace std;

int main()
{
    int i,j;

    cin >> i >> j ;
    swap_1(i,j);
    cout << "swap_1 value: " << i << " " << j << endl;
    swap_2(i,j);
    cout << "swap_2 reference: " << i << " " << j << endl;
    swap_pointer(&i, &j);
    cout << "swap_pointer: "<< i << " " << j << endl;
    return 0;
}


