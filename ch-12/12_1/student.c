#include <stdio.h>
#include <string.h>
#define pf printf
#define sf scanf

struct student
{
    int id;
    char name[30];
    int age;
    char course[20];
    char city[25];
    int standard;
    char school[30];
}

main()
{
    struct student s1[3];

    pf("\nEnter student details : \n");

    for (int i = 0; i <3; i++)
    {
        pf("\n\nFor student %d  \n", i+1);

        pf("Enter student ID\t:");
        sf("%d", &s1[i].id);
        
        fflush(stdin);
        pf("Enter student name\t: ");
        gets(s1[i].name);

        pf("Enter student Age\t:");
        sf("%d", &s1[i].age);

        fflush(stdin);
        pf("Enter student Course\t:");
        gets(s1[i].course);

        fflush(stdin);
        pf("Enter student City\t:");
        gets(s1[i].city);

        pf("Enter student STD\t:");
        sf("%d", &s1[i].standard);

        fflush(stdin);
        pf("Enter student School\t:");
        gets(s1[i].school);
    }

    pf("| ID\tName\tAge\tCourse\tCity\tSTD\tSchool\t\t|\n");
    for (int i = 0; i < 3; i++)
    {
        pf("| %4d\t%s\t%d\t%s\t%s\t%d\t%s\t\t|\n", s1[i].id, s1[i].name, s1[i].age, s1[i].course, s1[i].city, s1[i].standard, s1[i].school);
    }
}