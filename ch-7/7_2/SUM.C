
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a=0,n,sum=0;
	clrscr();

	pf("Enter any no. for sum :");
	sf("%d",&n);

	while(a<=n)
	{
	if(a<=n)
	pf("%d+",a);
	sum=sum+a;
	a++;
	}
	pf("\nsum will be : %d",sum);
	getch();


}
