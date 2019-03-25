#include "labs4.h"

#include <iostream>

using namespace std;

int main()
{
    cout << "LAB 4: Structures and pointers: application to lists" << endl;
    cout << "Submitted by Bhargav SHAH and Akshaykumar DUDHAGARA" << endl;
    cout << "Guided by Yohan Fougerolle " << endl;
    cout << endl;
    cout << endl;

    int n, a, in, delptr;

    //                      Exercise 1: 2D Point
    cout << "Exercise 1" << endl;
    Point2d m;
    Point2d *b=&m; // pointer is equal to the address of the object
    BuildPoint(b);

    // Display the values of members x and y for a Point2d
    cout<< endl;
    cout<<"The values of members x and y for a Point2d"<< endl;
    display(m);

    // Display the values of members x and y for a pointer to a Point2d
    cout<< endl;
    cout<<"The values of members x and y for a pointer to a Point2d"<< endl;
    display(b);


//                         Exercise 2: Polygon
    cout << endl;
    cout << "Exercise 2" << endl;
    cout << "Enter the number of points for a polygon(n): " << endl;
    cin >> n;
    cout << endl;

    Point2d* val = new Point2d[n]; // assign a new list
    Point2d *ptr;
    ptr = val;

    Buildpolygon(val, n);
    displaypolygon(ptr, n); // display polygon
    cout << endl;


    //                    Exercise 3: Insertion and deletion of elements

    cout << "Exercise 3" << endl;
    cout << "Enter the value for which information is required(<=n): " << endl;
    cin >> a;
    displayviapointer(ptr+a-1);
    cout << endl;

    if(a > n)
    {
        cout << "WRONG data entered!!!" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter the value at which you want to enter the element(<=n): " << endl;
    cin >> in;

    if(in > n)
    {
        cout << "WRONG data entered!!!" << endl;
        exit(EXIT_FAILURE);
    }
    Point2d* newptr = Insertelement(val, in-1, n);
    cout << endl;
    n++;
    displaypolygon(newptr, n);
    cout << endl;

    cout << "Enter the value at which you want to delete from the array(<=n): " << endl;
    cin >> delptr;

    if(delptr > n)
    {
        cout << "WRONG data entered!!!" << endl;
        exit(EXIT_FAILURE);
    }
    Point2d* newptr2 = delelement(newptr, delptr-1, n);
    n--;
    displaypolygon(newptr2, n);
    cout << endl;

    delete [] ptr;
    delete [] newptr;

    return 0;
}
