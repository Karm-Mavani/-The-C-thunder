
#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j,a=11;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			pf("%d ",a++);
		}
		pf("\n");
	}

	getch();


}
