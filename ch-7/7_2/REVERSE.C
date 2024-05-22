
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int n,a,b;
	int c=0;
	clrscr();

	pf("enter any no. : ");
	sf("%d",&n);

	while(n!=0)
	{
	 a=n%10;
	 c=c*10+a;
	 n=n/10;
	}

	pf("reverse no will be : %d",c);

	getch();


}
