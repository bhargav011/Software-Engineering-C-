#include "labs4.h"

//                         Exercise 1: 2D Point

// 1.2:Implement two functions display(...) that display on the screen the values of members x and y
void display(Point2d m) // The values of members x and y for a Point2d
 {
     cout << "Value of member X is " << m.x << " and Value of member Y is " << m.y << endl;
 }

void display(Point2d *m) // The values of members x and y for a pointer to a Point2d
 {
     cout << "Value of member X is " << m->x << " and Value of member Y is " << m->y << endl;
 }

// 1.3:Declare function BuildPoint(...) that asks values of members x and y for a 2D point
void BuildPoint( Point2d *m) // By pointer
{
    cout <<"Type the value of member X ";
    cin >> m->x;
    cout <<"Type the value of member Y ";
    cin >> m->y;
}

void BuildPoint ( Point2d &m) // By reference
{
    cout <<"Type the value of member X ";
    cin >> m.x;
    cout <<"Type the value of member Y ";
    cin >> m.y;
}

//                         Exercise 2: Polygon

// 2.2
// create a function for the value of prevx,prevy,nextx,nexty
void Buildneighbor(Point2d val[], int n, int i)
{
    // set boundary for the value of i
    if(i == 0)
    {
        val[i].prevx = val[n].x;
        val[i].prevy = val[n].y;
        val[i].nextx = val[1].x;
        val[i].nexty = val[1].y;
    }else
    if(i == n)
    {
        val[i].prevx = val[n-1].x;
        val[i].prevy = val[n-1].y;
        val[i].nextx = val[0].x;
        val[i].nexty = val[0].y;
    }else
    {
        val[i].prevx = val[i-1].x;
        val[i].prevy = val[i-1].y;
        val[i].nextx = val[i+1].x;
        val[i].nexty = val[i+1].y;
    }

    cout << endl;
}

void Buildpolygon(Point2d val[], int n)
{
    Point2d *ptr1; // temp variable as a pointer

    ptr1 = val;
    for(int i = 0; i < n; i++)
    {
        BuildPoint(ptr1); // call a function for x and y
        ptr1++;
    }

    ptr1 = val;
    for(int i = 0; i < n; i++) // loop for polygon
    {
        Buildneighbor(ptr1, n-1, i);

    }

}

// 2.3: Displays the elements of a polygon and also display the previous and next points within the polygon
void displayviapointer(Point2d *ptr)
{
    cout << "Previous elements are: " <<"X = " << ptr->prevx << " and  Y= " << ptr->prevy << endl;
    cout << "Entered Point is: "  <<"X = " << ptr->x << " and Y= " << ptr->y << endl;
    cout << "Next elements are: "  <<"X = " << ptr->nextx << " and Y= " << ptr->nexty << endl;
    cout << endl;
}

void displaypolygon(Point2d *ptr, int n)
{
    Point2d *disp = ptr;
    cout << "Displaying the elements and their neighbors: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout <<"Point at position "<<i<<endl;
        displayviapointer(disp);
        disp++;
    }
}


//                Exercise 3: Insertion and deletion of elements

// 3.3
Point2d* Insertelement(Point2d val[], int in, int n) // inserts an element at a given position
{
    Point2d* val2 = new Point2d[n+1]; // assign a new list

    for(int i = 0; i < n+1; i++)
    {
        if(i==n)
            val2[i] = val[i-1];
        else
            val2[i] = val[i];
    }

    for(int i = n; i > in; i--)
    {
        val2[i].x = val2[i-1].x;
        val2[i].y = val2[i-1].y;
        val2[i].nextx = val2[i-1].nextx;
        val2[i].nexty = val2[i-1].nexty;
        val2[i].prevx = val2[i-1].prevx;
        val2[i].prevy = val2[i-1].prevy;
//        (ptrIn + i)->x = (ptrIn + i - 1)->x;
//        (ptrIn + i)->y = (ptrIn + i - 1)->y;
//        (ptrIn + i)->nextx = (ptrIn + i - 1)->nextx;
//        (ptrIn + i)->nexty = (ptrIn + i - 1)->nexty;
//        (ptrIn + i)->prevx = (ptrIn + i - 1)->prevx;
//        (ptrIn + i)->prevy = (ptrIn + i - 1)->prevy;

    }

    Point2d* ptrIn = val2;

    BuildPoint((ptrIn+in));
    for(int i = 0; i < n+1; i++)
    {
        Buildneighbor(ptrIn, n, i); // update the element of x and y
    }
    return val2;
}

// 3.4
Point2d* delelement(Point2d val3[], int delptr, int n) // delete an element at position I
{
    Point2d* val31 = new Point2d[n-1];
    for(int i = 0; i < n-1; i++)
    {
        if(i >= delptr)
            val31[i] = val3[i+1];
        else
            val31[i] = val3[i];
    }

//    for(int i = delptr; i < n-1; i++)
//    {
//        val2[i].x = val2[i+1].x;
//        val2[i].y = val2[i+1].y;
//        val2[i].nextx = val2[i+1].nextx;
//        val2[i].nexty = val2[i+1].nexty;
//        val2[i].prevx = val2[i+1].prevx;
//        val2[i].prevy = val2[i+1].prevy;
//    }
    Point2d* ptrIn = val31;

    for(int i = 0; i < n-1; i++)
    {
        Buildneighbor(ptrIn, n-2, i);
    }
    return val31;
}
