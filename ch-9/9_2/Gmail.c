#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    char email[] = "admin@gmail.com";
    char pas[] = "123456";
    char email1[16], pas1[7], cmp;
    int len, length;

    pf("\nEnter your Gmail : ");
    sf("%s", &email1);

    pf("\nEnter your Password : ");
    sf("%s", &pas1);

    for (int i = 0; email[i] != '\0'; i++)
        len++;
    
    for (int i = 0; pas[i] != '\0'; i++)
        length++;
    
    for (int i = 0; i < len; i++)
    {
        if (email[i] == email1[i])
            cmp = 0;
        else
        {
            cmp = 1;
            break;
        }
    }
    
    for (int i = 0; i < length; i++)
    {
        if (pas[i] == pas1[i])
            cmp = 0;
        else
        {
            cmp = 1;
            break;
        }
    }

    if(cmp==0)
     pf("\nLogin Successful...");
    else
    pf("\nLogin Failed. Invalid Credentials.");
}