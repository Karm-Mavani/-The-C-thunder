#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int cmp, len = 0, n = 0;
    char a[20], rev[20];

    pf("Enter your name : ");
    sf("%[^\n]", &a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        rev[n++] = a[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (rev[i] == a[i])
        {
            cmp = 0;
        }
        else
        {
            cmp = 1;
            break;
        }
    }
    if (cmp == 0)
    {
        pf("\n This name is palindrom");
    }
    else
    {
        pf("\n This name is not palindrom");
    }
}