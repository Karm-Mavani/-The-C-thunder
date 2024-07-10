#include <stdio.h>
#define pf printf
#define sf scanf

void main()
{  
    for(int i=5;i>=1;i--)
    {   int a=5;
        for(int s=i;s>1;s--)
        pf(" ");
        for(int j=i;j<=5;j++)
        {
            pf("%d",j+5);
        }
        pf("\n");
    }
}