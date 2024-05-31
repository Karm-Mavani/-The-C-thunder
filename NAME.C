#include<stdio.h>
#include<conio.h>
#define pf printf


main()
{
	int i,j;
	clrscr();


	for(i=1;i<=7;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(( (i==2 ||i==3||i==6) && (j==1||j==5)) ||(i==7 &&(j==1 ||j==6)) || (i==1 && (j>=2 && j<=4)) || (i==4 && (j<=4)) || (i==5 && (j==1 || j==4)))
			{
				pf("*");
			}
			else
			{
				pf(" ");
			}

		}

	       pf("\n");
	       }
	getch();


}
