#include <stdio.h>

int division(int a)
{
    int b, c;
    if (a % 3 == 0 && a % 5 == 0)
    {
        a = 1;
    }
    else
    {
        a = 0;
    }

    return a;
}

void main()
{
    int a, b;
    printf("Enter any no. : ");
    scanf("%d", &a);

    b = division(a);

    if (b == 1)
    {
        printf(" This Number is divisible by 3 and 5  both\n");
    }
    else
    {
        printf(" This Number is not divisible by 3 or 5\n");
    }
}
