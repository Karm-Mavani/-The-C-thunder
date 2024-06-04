
#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j,s;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(s=1;s<i;s++)
		{
			pf(" ");
		}
		for(j=i;j<=5;j++)
		{
			pf("%d",j);
		}
		pf("\n");
	}

	getch();


}
