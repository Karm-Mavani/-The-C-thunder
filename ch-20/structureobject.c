#include <stdio.h>
#include <string.h>
#define pf printf
#define sf scanf

struct student
{
    int rollno;
    char name[50];
    float per;
};

void main()
{
    struct student s1;
   

    pf("Enter Student roll no. : ");
    sf("%d", &s1.rollno);

    pf("Enter Student name : ");
    fflush(stdin);
    gets(s1.name);
    

    pf("Enter Student percentage : ");
    sf("%f",&s1.per);
    

    pf("\n\nOutput\n\n");
    pf("Student name : %s\n",s1.name);
    pf("Student roll no : %d \n",s1.rollno);
    pf("Student percentage : %.2f \n",s1.per);
}  