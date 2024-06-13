#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int a, b, j = 0;
    ;
    pf("Enter starting year : ");
    sf("%d", &a);
    pf("Enter ending year : ");
    sf("%d", &b);
    int leap[b - a];
    for (int i = a; i <= b; i++)
    {
        if (i % 4 == 0 )
        {

            leap[j] = i;
            j++;
        }
    }

    pf("\n\nLeap year is\n");
     
    for (int i = 0; i < j; i++)
    {
        pf(" %d\n", leap[i]);
    }
}