#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    int cmp, len = 0;
    char a[20], fre[20];

    pf("Enter your name : ");
    sf("%[^\n]", &a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        int n = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] == a[j])
            {
                n++;
                a[j] = '\0';
            }
        }
        if (a[i] != '\0')
        {
            pf("\n %c ==>%d", a[i], n);
        }
    }
}