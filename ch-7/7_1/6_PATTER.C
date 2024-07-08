
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int i,j;
	

	for(i=1;i<=5;i++)
	{
	 for(j=5;j>=i;j--)
	 {
	 pf("%d",j%2);
	 }
	pf("\n");

	}

	getch();


}

