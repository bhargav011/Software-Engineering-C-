#include <iostream>

using namespace std;

//                         Exercise 1: 2D Point

// 1.Declare and implement a structure Point2d to represent a 2D point which has to members x and y represented by floats
struct Point2d
{
    float x, y,prevx, prevy, nextx, nexty;
};

// 2.Implement two functions display(...) that display on the screen the values of members x and y
void display(Point2d a); // For a Point2d
void display(Point2d *a); // For a pointer to a Point2d

// 3.Declare function BuildPoint(...) that asks values of members x and y for a 2D point
void BuildPoint(Point2d *a); // By pointer
void BuildPoint ( Point2d &a); // By reference


//                         Exercise 2: Polygon

// 1.Declare a structure Polygon2d that contains a pointer to an initial 2D point called start
struct Polygon2d
{
    int n;
    Point2d *start;  // Pointer to an initial 2D point start
};

// 2.Declare and implement a function BuildPolygon(...)
void Buildneighbor(Point2d val[], int n, int i);
void Buildpolygon(Point2d val[], int n);
void displaypolygon(Point2d *ptr, int n);
void displayviapointer(Point2d *ptr);


//                         Exercise 3: Insertion and deletion of elements

// 3.InsertAt(...) that inserts an element at a given position
Point2d* Insertelement(Point2d val[], int in, int n);
// 4.DeleteAt(...)that deletes an element at position I
Point2d* delelement(Point2d val3[], int delptr, int n);
