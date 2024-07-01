#include <stdio.h>
#define pf printf
#define sf scanf

int sumarray(int a)
{
    int c=0;
    
    int b[a];
    pf("\n\nEnter array element : \n");

    for (int i = 0; i < a; i++)
    {
        pf("a[%d] : ",i);
        sf("%d", &b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        c += b[i] ;
    }
    return c;
}

void main()
{
    int a,b;
    pf("Enter Array size : ");
    sf("%d", &a);
    b=sumarray(a);
    pf("\n\nSum of array element : %d",b);
}