#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int n, j;
    pf("Enter array size : ");
    sf("%d", &n);
    int a[n];
    int neg[n];

    for (int i = 0; i < n; i++)
    {
        pf("Enter a[%d] : ", i);
        sf("%d", &a[i]);
    }
    pf("\n\nNegative no. is ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            pf(" %d  ", a[i]);
        }
    }
}
