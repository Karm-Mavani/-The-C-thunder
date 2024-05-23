
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a=10;
	clrscr();

	pf("Enter any no. :  ");

	pf("\n");
	do
	{

	 pf("%d\t",a);
	 a--;

	}while(a>=1);

	getch();


}
