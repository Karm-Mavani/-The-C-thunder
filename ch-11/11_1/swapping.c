#include <stdio.h>
#define pf printf
#define sf scanf

void main()
{
    int a, b;

    pf("Enter A : ");
    sf("%d", &a);
    pf("Enter B : ");
    sf("%d", &b);

    pf("\nBefore Swapping\n\n");

    int *ptr, *ptr1, *ptr2;

    ptr = &a;
    ptr1 = &b;

    pf("A\t:%d\n", *ptr);
    pf("B\t:%d", *ptr1);

    ptr2 = ptr;
    ptr = ptr1;
    ptr1 = ptr2;

    pf("\n\nAfter Swapping\n\n");

    pf("A\t:%d\n", *ptr);
    pf("B\t:%d", *ptr1);
}