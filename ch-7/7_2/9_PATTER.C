#include <stdio.h>
#include <conio.h>
#define pf printf

main()
{
	int i,j;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			pf("%d",j);
		}
		pf("\n");
	}

	for(i=2;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			pf("%d",j);

		}
		pf("\n");
	}


	getch();
}