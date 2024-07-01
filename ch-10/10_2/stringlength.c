#include <stdio.h>
#define pf printf
#define sf scanf

int stringlen(char str[200])
{
    int len = 0,i = 0;
    for (i = 0; str[i] != '\0'; i++)
        len++;
    return len;
}
void main()
{
    char string[200];
    int length;
    
    pf("Enter any string : ");
    sf("%[^\n]", &string);
    
    length = stringlen(string);
    
    pf("\n");
    pf("String length is %d",length);
}