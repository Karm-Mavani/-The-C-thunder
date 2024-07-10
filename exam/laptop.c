#include <stdio.h>
#define pf printf
#define sf scanf

struct laptop
{
    char company[50];
    char processor[25];
    int price;
};

void main()
{
    int n;
    pf("Enter no. of laptop : ");
    sf("%d", &n);
    struct laptop l1[n];

    for (int i = 0; i < n; i++)
    {
        pf("\n\nFor laptop %d\n", i+1);

        fflush(stdin);
        pf("Enter company\t: ");
        sf("%[^\n]", &l1[i].company);

        fflush(stdin);
        pf("Enter processor\t: ");
        sf("%[^\n]", &l1[i].processor);

        pf("Enter price\t: ");
        sf("%d", &l1[i].price);
    }

    pf("\n\nOutput\n\n");
    for (int i = 0; i < n; i++)
    {
        pf("\n\n");
        pf("For Laptop %d", i);
        pf("\nCompany\t : %s", l1[i].company);
        pf("\nProcessor:%s", l1[i].processor);
        pf("\nPrice\t : %d", l1[i].price);
    }
}