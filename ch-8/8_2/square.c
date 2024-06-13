#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int n;
    pf("Enter array size : ");
    sf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        pf("a[%d] : ", i);
        sf("%d", &a[i]);
    }
    pf(" Element Square is :\n");
    for (int i = 0; i < n; i++)
    {
        pf("%d\n", a[i] * a[i]);
    }
}