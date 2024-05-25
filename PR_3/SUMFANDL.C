
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,b,c,d=0,e;
	clrscr();

	pf("Enter any no. : ");
	sf("%d",&a);

	b=a;

	while(a>10)
	{
	a=a%10;
	}

	while(b!=0)
	{
	 c=b%10;
	 d=(d*10)+c;
	 b=b/10;
	}
	while(d>10)
	{
	d=d%10;
	}

	pf("\n First digit is : %d",a);
	pf("\n Last digit is  : %d",d);

	e=a+d;

	pf("\n\nSum of both digit is : %d",e);

	getch();


}
