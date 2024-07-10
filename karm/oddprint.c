#include <stdio.h>
#define pf printf
#define sf scanf

void oddpri(int a)
{
    
    int arr[a];
    for(int i=0;i<a;i++)
    {
        pf("Enter the a[%d] : ",i);
        sf("%d",&arr[i]);    
    }

    pf("\nOdd no. is\n");
    
    for(int i=0;i<a;i++)
    {
        if(arr[i]%2!=0)
        {
            pf(" %d ",arr[i]);
        }
    }
}
void main()
{
    int a;
    pf("Enter the length of array : ");
    sf("%d",&a);
    pf("\n");
    oddpri(a);
}