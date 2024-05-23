
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a=0,b=1,c,d,i=1;

	clrscr();

	pf("\nEnter palce no. in series : ");
	sf("%d",&d);
	pf(" %d  %d ",a,b);

	while (i<=d)
	{

	c=a+b;
		pf(" %d ",c);
	a=b;
	b=c;
	i++;
	}

	getch();


}
