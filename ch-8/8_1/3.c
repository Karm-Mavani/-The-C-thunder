#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int n;
    pf("Enter the number of elements: ");
    sf("%d", &n);

    int a[n], b[n], sum[n];

    pf("\n\nFor array A\n\n");
    for (int i = 0; i < n; i++)
    {
        pf("enter a[%d] :", i);
        sf("%d", &a[i]);
    }

    pf("\n\nFor array B\n\n");

    for (int i = 0; i < n; i++)
    {
        pf("enter b[%d] :", i);
        sf("%d", &b[i]);
    }
    for(int i = 0; i < n; i++)
    {
        sum[i] = a[i] + b[i];
    }
    pf("\n\nThe sum of array A and B is:\n\n");

    for(int i = 0; i < n; i++)
    {
        pf("%d\t",sum[i]);
    }

}
