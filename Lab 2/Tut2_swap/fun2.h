#ifndef FUN2_H
#define FUN2_H


void swap_1(int a, int b) //swap function by value
{
    int z;
    z = a;
    a = b;
    b = z;

}

void swap_2(int &a, int&b) //swap function by Reference
{
    int z;
    z = a;
    a = b;
    b = z;
}
void swap_pointer(int* a, int* b) //swap function by pointer
{
    int z;
    z = *a;
    *a = *b;
    *b = z;
}

#endif // FUN2_H
