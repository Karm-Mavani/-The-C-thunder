#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int a , n;

    pf("Enter any no.:");
    sf("%d", &n);
    
    for (int b = 1; b <= 10; b++)
    {
    a=n*b;
    pf("%d * %d = %d\n",n,b,a);
    }
}