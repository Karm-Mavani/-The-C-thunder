#include <stdio.h>
#define pf printf
#define sf scanf

void main()
{
    int a=50;
    FILE *fp,*fp1;
    fp=fopen("odd.txt","w");
    fp1=fopen("even.txt","w");
    
    fprintf(fp,"Odd no. are\n");
    fprintf(fp1,"Even no. are\n");
    for(int i=50;i<=70;i++)
    {
        if(i%2==0)
        {
            fprintf(fp1," %d ",i);
        }
        else
        {
            fprintf(fp," %d ",i);
        }
    }
    fclose(fp);
    fclose(fp1);
}