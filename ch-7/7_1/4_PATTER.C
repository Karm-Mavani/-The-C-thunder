
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int i,j;
	clrscr();

	for(i=1;i<=5;i++)
	{
	 for(j=i;j<=5;j++)
	 {
	  pf("%d",j);
	 }
	pf("\n");

	}

	getch();


}

