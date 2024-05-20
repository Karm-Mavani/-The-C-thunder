
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,b,c,d;
	clrscr();

	pf("Enter the first no.  :");
	sf("%d",&a);
	pf("Enter the second no. :");
	sf("%d",&b);
	pf("Enter the third no.  :");
	sf("%d",&c);
	pf("Enter the fourth no. :");
	sf("%d",&d);

	if(a>b)
	{
	   if(a>c)
	   {
	     if(a>d)
	     {
	     pf("%d is maximum...",a);
	     }
	     else
	     {
	     pf("%d is maximum...",d);
	     }

	   }
	   else
	   {
	    if(c>d)
	    {
	     pf("%d is minimum...",c);
	    }
	    else
	    {
	     pf("%d is maximum...",d);
	    }

	   }
	}
	else
	{
		if(b>c)
		{
		 if(b>d)
		 {
		  pf("%d is minimum...",b);
		 }
		 else
		 {
		 pf("%d is maximum...",d);
		 }
		}
		else
		{
		  if(c>d)
		  {
		  pf("%d is minimum...",c);
		  }
		  else
		  {
		  pf("%d is maximum",d);
		  }

		}
	}




	getch();


}
