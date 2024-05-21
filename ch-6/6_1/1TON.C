
#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int a=1,b;
	clrscr();

	pf("enter any no. :");
	scanf("%d",&b);

	while(a<=b)
	{
	 pf("%d\t",a++);

	}
	getch();


}
