#include <stdio.h>
#include <conio.h>
#define pf printf

main()
{
	int i,j,s,a;
	clrscr();

	for (i=1;i<=5;i++)
	{
		for(s=5;s>i;s--)
		{
			pf(" ");
		}
		for(j=1;j<=i;j++)
		{
			pf("%d",j);
		}
			a=(i-1);
			for(j=a;j>=1;j--)
			{
			pf("%d",j);
			}

		pf("\n");


	}


	getch();
}