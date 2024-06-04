
#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j,s,a;
	clrscr();

	for(i=5;i>=1;i--)
	{       a=i-1;
		for(s=1;s<i;s++)
		{
			pf(" ");
		}
		for(j=i;j<=5;j++)
		{
			pf("%d",j);
		}
		for(j=4;j>a;j--)
		{
			pf("%d",j);
		}

			pf("\n");
	}

	getch();


}
