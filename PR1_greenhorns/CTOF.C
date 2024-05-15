
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	float celsius,fahrenheit,my,you;
	clrscr();

	printf("Enter the temperature in celsius : ");
	sf("%f",&celsius);

	my=celsius*9;
	you=my/5;
	fahrenheit=you+32;

	pf("temperature in fahrenheit will be : %.2f",fahrenheit);

	getch();


}
