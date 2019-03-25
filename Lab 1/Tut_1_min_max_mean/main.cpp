#include<iostream>
using namespace std;
/*
 * SHAH Bhargav & DUDHAGARA Akshay
 *
 */

int maximum (int A, int B) //creat a function of maximum value
{
    return(A > B ? A:B); //retun the maximum number
}
int minimum (int A, int B) //create a function of minimum value
{
    return(A < B ? A:B); //return the minimum number
}
int mean (int A, int B) //create a function of mean value
{
    return(A + B) / 2.0; //return the mean number
}
int main()
{
    //int A,B;
    //cin>> A ;
    //cin>> B ;
    cout << "maximum(A,B)==" << maximum(4,5) << endl; //print and call the maximum function
    cout << "minimum(A,B)==" << minimum(5,4) << endl; //print and call the minimum function
    cout << "mean (A,B)==" << mean(10,10) << endl;    // print and call the mean function
    return 0;

}

