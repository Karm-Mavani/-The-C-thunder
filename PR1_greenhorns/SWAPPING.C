
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,b;

	clrscr();

	printf("Enter the value of A :");
	sf("%d",&a);

	pf("Enter the value of B :");
	sf("%d",&b);

	pf("\nBefore Swapping\n\n");

	pf("A\t:%d\n",a);
	pf("B\t:%d",b);

	a = a*b;
	b = a/b;
	a = a/b;

	pf("\n\nAfter Swapping\n\n");

	pf("A\t:%d\n",a);
	pf("B\t:%d",b);


	getch();


}
