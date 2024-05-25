
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	long int a,b=0;
	clrscr();

	pf("Enter any no. : ");
	sf("%ld",&a);

	while(a!=0)
	{
	a=a/10;
	b++;

	}


	pf("\nThis no. has %d digit",b);


	getch();


}
