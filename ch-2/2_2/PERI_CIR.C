
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
#define pi 3.14


main()
{
	float radius , perimeter;
	float w=2;

	clrscr();

	pf("enter the radius of Circle : ");
	sf("%f",&radius);

	perimeter=radius*pi*2 ;
	pf("The perimeter of Circle : %f",perimeter);

	getch();


}
