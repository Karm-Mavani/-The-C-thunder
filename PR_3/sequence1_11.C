
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	long int a,b,c=0,d;
	clrscr();

	pf("Enter any no. between 1 to 9 : ");
	sf("%ld",&a);

	pf("\nEnter no. of time of sequences repeatation : ");
	sf("%ld",&b);

	d=a;

	if(a<10)
	{
	 pf("\nsequence is : \n");
	 while(c<=b)
	  {
	   a=(a*10)+d;
	   pf(" %ld=>%ld ",c ,a);
	   c++;

	  }
	}
	else
	{
	pf("Invalid no.......");
	}


	getch();


}
