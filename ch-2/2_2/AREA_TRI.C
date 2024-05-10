
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
main()
{       float base,height,area,s;
	float t=2;

	clrscr();



	pf("enter the value of Base of Triangle :");
	sf("%f",&base);

	pf("enter the value of Height of Triangle :");
	sf("%f",&height);

	s=base*height;
	area=s/t;

	pf("The area of Triangle is : %.3f",area);




	getch();


}

