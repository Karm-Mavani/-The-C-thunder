#include <stdio.h>
#define pf printf
#define sf scanf

void main()
{
    char string[200];

    pf("Enter any string : ");
    sf("%[^\n]", &string);

    int len = 0;
    int *length;

    for (int i = 0; string[i] != '\0'; i++)
    {
        len++;
    }

    length = &len;

    pf("\n");
    pf("String length is %d", *length);
}