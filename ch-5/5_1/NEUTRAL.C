
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{

	int a,b,ans;

	clrscr();

	printf("Enter the value of A :");
	sf("%d",&a);

	pf("\n");

	if(a>0)
	{
	 pf("This Number is positive ");
	}
	else if(a<0)
	{
	 pf("This Number is Negative");
	}
	else
	{
	 pf("This Number is Nuetral");
	}



	getch();



}
