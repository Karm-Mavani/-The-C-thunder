#include <stdio.h>
#define pf printf
#define sf scanf

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int per(int a, int b)
{
    return (b * 100) / a;
}

void main()
{
    int choice = 1, a = 1, b = 1;
    for (int i = 0; choice != 0; i++)
    {

        pf("\n\n");
        pf("Press 1 for +\n");
        pf("Press 2 for -\n");
        pf("Press 3 for *\n");
        pf("Press 4 for /\n");
        pf("Press 5 for %%\n");
        pf("Press 0 for exit\n");
        pf("\nEnter your choice : ");
        sf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        pf("Enter first no\t: ");
        sf("%d", &a);

        if (a == 0)
        {
            break;
        }
        pf("Enter second no\t: ");
        sf("%d", &b);
        if (a == 0)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            pf("\nAddition of %d and %d is %d\n", a, b, add(a, b));
            break;

        case 2:
            pf("\nSubtraction of %d and %d is %d\n", a, b, sub(a, b));
            break;

        case 3:
            pf("\nMultiplication of %d and %d is %d\n", a, b, mul(a, b));
            break;

        case 4:
            pf("\nDivision of %d and %d is %d\n", a, b, div(a, b));
            break;

        case 5:
            pf("\nAddition of %d and %d is %d\n", a, b, add(a, b));
            break;
        case 0:
            break;
        }
    }
}