#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int n, sum = 0;
    pf("Enter array size : ");
    sf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        pf("a[%d] : ", i);
        sf("%d", &a[i]);
    }

    int i;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    int avg;
    avg = sum / n;
    pf("Average : %d", avg);
}