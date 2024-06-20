#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int len = 0, a = 0, b = 0, c = 0, d = 0;
    char pas[20];

    pf("Enter Password : ");
    sf("%s", &pas);

    for (int i = 0; pas[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        if (pas[i] >= 'A' && pas[i] <= 'Z')
        {
            a++;
        }
        else if (pas[i] >= 'a' && pas[i] <= 'z')
        {
            b++;
        }
        else if (pas[i] >= '0' && pas[i] <= '9')
        {
            c++;
        }
        else 
        {
            d++;
        }
    }

    if (a >= 1 && b >= 1 && c >= 1 && d >= 1 && len >= 6)
    {
        pf("Password is valid\n");
    }
    else
    {
        pf("Password is not valid\n");
    }
}