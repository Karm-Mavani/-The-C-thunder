
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	float FirstAngle ,SecondAngle ,ThirdAngle;
	clrscr();

	pf("Enter the first angle of Triangle :");
	sf("%f",&FirstAngle);

	pf("\n");
	pf("Enter the second angle of Triangle : ");
	sf("%f",&SecondAngle);

	ThirdAngle = 180 - (FirstAngle + SecondAngle);

	pf("\n");
	pf("Third Angle of the Triangle is : %.2f",ThirdAngle);




	getch();


}
