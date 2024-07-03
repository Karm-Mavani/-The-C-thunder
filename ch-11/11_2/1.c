#include <stdio.h>
#define pf printf
#define sf scanf

void main()
{
    int n;
    pf("Enter array size : ");
    sf("%d", &n);

    int array[n];
    pf("\n");
    for (int i = 0; i < n; i++)
    {
        pf("Enter array[%d] : ", i);
        sf("%d", &array[i]);
    }
    
    int *ptr;
    int **ptr1;

    ptr = &array;
    ptr1 = &ptr[n-1];

    pf("After reversing \n");
    
    for (int i = 0; i < n; i++)
    {
        pf(" %d ", *(ptr1 - i));
    }
}
