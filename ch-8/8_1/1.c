#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int n;
    pf("Enter array size : ");
    sf("%d",&n);
    int a[n];
    
    
    for(int i=0;i<n;i++)
    {
        pf("a[%d] : ",i);
        sf("%d",&a[i]);
    }

    pf("Array size is :%d",n);
}