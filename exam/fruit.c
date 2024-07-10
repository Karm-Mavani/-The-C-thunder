#include <stdio.h>
#define pf printf
#define sf scanf

struct fruit
{
    char name[20];
    char color[15];
};

void main()
{

    int n;
    pf("Enter the number of fruits : ");
    sf("%d", &n);
    struct fruit f1[n];
    int a[n];
    FILE *fp;

    fp = fopen("data.txt", "w");
    for (int i = 0; i < n; i++)
    {
        pf("\nFor fruit %d \n", i + 1);

        fflush(stdin);
        pf("Enter the name of the fruit : ");
        sf("%s", &f1[i].name);

        fflush(stdin);
        pf("Enter the color of the fruit : ");
        sf("%s", &f1[i].color);
    }

    for (int i = 0; i < n; i++)
    {
        //fprintf("fp,\nFor fruit %d \n", i + 1);
        fprintf(fp," name of the fruit : %s\n", f1[i].name);
        fprintf(fp," color of the fruit : %s\n\n", f1[i].color);
    }
    fclose(fp);
}