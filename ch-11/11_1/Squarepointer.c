#include <stdio.h>
#define pf printf
#define sf scanf


void main()
{
    int a;
    pf("Enter size of array : ");
    sf("%d", &a);

    int array[a];
    int *ptr;

    pf("\n\nEnter array\n");

    for (int i = 0; i < a; i++)
    {
        pf("array[%d] : ", i);
        sf("%d", &array[i]);
        array[i]=array[i]*array[i];     
    }
    ptr = &array;
    
    pf("\n\nSquare of each element : ");
    
    for (int i = 0; i < a; i++)
        pf("%d\t", *((ptr+i)));
}