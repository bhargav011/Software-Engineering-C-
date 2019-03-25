#include <iostream>
using namespace std;
/*
 * SHAH Bhargav & DUDHAGARA AkshayKumar
 * Use a bidimensional array statically allocated
 */

int main()
{
    const int ROWS = 8, COLS = 8; // a static array with arbitary size
    int Tab2[ROWS][COLS] ={} ; //bidimensional array Tab2 that contains n*n integers
    Tab2[0][0] = 0;
    cout << Tab2[0][0] << endl;


    for ( int i = 1; i < ROWS; i++ )
    {
        Tab2[i][0] = 1; // when j = 0, set the values to 1
        Tab2[i][i] = 1; // when j = i (end of triangle), set the values to 1
        cout << Tab2[i][0] << "    ";

        for ( int j = 1; j < COLS; j++ )
        {
            Tab2[i][j] = Tab2[i-1][j] + Tab2[i-1][j-1];
            cout << Tab2[i][j] << "    ";
        }

        cout << Tab2[i][i] << endl; // display the result
    }
 }
