
#include<stdio.h>
#include<conio.h>


main()
{       float length,breath,area;

	clrscr();

	printf("enter the length of rectangle : ");
	scanf("%f",&length);

	printf("enter the breath of rectangle : ");
	scanf("%f",&breath);

	printf("\n");

	area=length*breath;
	printf("area of rectangle :%.3f",area);

	getch();


}
