
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a;
	clrscr();

	pf("Enter any no. :");
	sf("%d",&a);

	(a%2==0)
		?pf("%d is even no.",a)
		:pf("%d is odd no.",a);

	getch();


}
