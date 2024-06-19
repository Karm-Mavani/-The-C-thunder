#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    char name[20];
    pf("Enter name : ");
    sf("%[^\n]", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
            name[i] = name[i] - 32;
    }
    pf("\nCAPITAL NAME : %s",name);
}