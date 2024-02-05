#include <stdio.h>


int main()
{
    float a,b;
    a =1.5f;
    b = 2.5f;
    float *p1, *p2;

    p1 = &a; 
    p2 = &b;

    int k = *p1 + *p2;

    return 0;
}