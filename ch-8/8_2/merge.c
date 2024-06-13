#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int n, size;
    pf("Enter array A size : ");
    sf("%d", &n);
    pf("Enter array B size : ");
    sf("%d", &size);
    int a[n];
    int b[size], merge[n + size];
    pf("\n\nFor array A\n\n");
    for (int i = 0; i < n; i++)
    {
        pf("a[%d] : ", i);
        sf("%d", &a[i]);
    }
    pf("\n\nFor array b\n\n");
    for (int i = 0; i < size; i++)
    {
        pf("b[%d] : ", i);
        sf("%d", &b[i]);
    }
    for (int i = 0; i < size; i++)
    {
        merge[i] = a[i];
    }
    for (int i = 0; i < size; i++)
    {
        merge[n++] = b[i];
    }
    pf("\n\nMerge Array\n\n");
    for (int i = 0; i < n; i++)
    {
        pf("%d ", merge[i]);
    }
}