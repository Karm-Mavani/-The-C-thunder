#include <stdio.h>
#include <string.h>
#define pf printf
#define sf scanf

struct employ
{
    int id;
    char name[30];
    int age;
    char role[20];
    char city[25];
    char experience[500];
    char company[30];
}

main()
{
    int n;
    pf("Enter no. of employ : ");
    sf("%d", &n);
    struct employ e[n];

    for (int i = 0; i < n; i++)
    {
        pf("\n\nFor employ %d  \n", i + 1);

        pf("Enter employ ID\t:");
        sf("%d", &e[i].id);

        fflush(stdin);
        pf("Enter employ name\t: ");
        gets(e[i].name);

        pf("Enter employ Age\t:");
        sf("%d", &e[i].age);

        fflush(stdin);
        pf("Enter employ role\t:");
        gets(e[i].role);

        fflush(stdin);
        pf("Enter employ City\t:");
        gets(e[i].city);

        fflush(stdin);
        pf("Enter employ experience\t:");
        sf("%d", &e[i].experience);

        fflush(stdin);
        pf("Enter employ company\t:");
        gets(e[i].company);
    }
    pf("\nOutput\n\n");
    for (int i = 0; i < n; i++)
    {
        pf("employ ID\t:%d\n", e[i].id);
        pf("Employ name\t: %s\n",e[i].name);
        pf("employ age\t: %d\n",e[i].age);
        pf("employ role\t: %s\n",e[i].role);
        pf("employ city\t: %s\n",e[i].city);
        pf("employ experience\t:%s\n",e[i].experience);
        pf("employ company\t:%s\n",e[i].company);
    }
}