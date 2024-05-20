
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,b,c;
	clrscr();

	pf("Enter the first no. :");
	sf("%d",&a);
	pf("Enter the second no. :");
	sf("%d",&b);
	pf("Enter the third no. :");
	sf("%d",&c);

	if(a<b)
	{
	   if(a<c)
	   {
	    pf("%d is minimum...",a);
	   }
	   else
	   {
	    pf("%d is minimum...",c);
	   }
	}
	else
	{
		if(b<c)
		{
		 pf("%d is minimum...",b);
		}
		else
		{
		pf("%d is minimum...",c);
		}
	}




	getch();


}
