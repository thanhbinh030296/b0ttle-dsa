#include <stdio.h>

int main()
{
    int a,b,c;
    a = b = c = 3;

    int *p1, *p2 ,*p3;

    p1 = &a; 
    p2  = &b;
    p3 = &c;

    printf("Aerea of triangle = %d", (*p1 + *p2 + *p3));


    return 0;
}