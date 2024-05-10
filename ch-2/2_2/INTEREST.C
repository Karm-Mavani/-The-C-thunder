
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	float principle,rate,time,i,simpleinterest;
	float h=100;

	clrscr();

	pf("Enter the Principle :");
	sf("%f",&principle);

	pf("Enter the Rate :");
	sf("%f",&rate);

	pf("Enter the Time in year : ");
	sf("%f",&time);

	i=principle*rate*time;
	simpleinterest=i/h;

	pf("the simple interest will be : %f",simpleinterest);



	getch();


}
