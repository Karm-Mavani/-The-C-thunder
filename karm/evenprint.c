#include <stdio.h>
#define pf printf
#define sf scanf

void evenpri(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        if(*(ptr+i)%2==0)
        {
            pf("%d ",*(ptr+i));
        }
    }
}

void main()
{
    int n;

    pf("Enter the number of elements : ");
    sf("%d", &n);

    int a[n];
    
    pf("\nEnter Array elements\n");
    for (int i = 0; i < n; i++)
    {
        pf("Enter a[%d] : ", i);
        sf("%d", &a[i]);
    }
    evenpri(&a,n);
}