
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,b,sum=0,mul=1;
	clrscr();

	pf("Enter any no. : ");
	sf("%d",&a);

	while (a!=0)
	{
	 b=a%10 ;
	 sum+=b;
	 mul*=b;
	 a=a/10 ;

	}


	if(sum==mul)
	{
	 pf("This no. is magic number....");
	}
	else
	{
	 pf("This no. is not magic number....");
	}

	getch();


}
