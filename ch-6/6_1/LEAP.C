#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int b,n;
	clrscr();

	pf("enter any starting year no. :");
	scanf("%d",&n);

	pf("enter any ending year no.   :");
	scanf("%d",&b);

	pf("the leap year between this is :");

	while(n<=b)
	{
	 if(n%4==0)
	 {
	 pf("%d\t",n);
	 }
	 n++;
	}

	getch();


}
