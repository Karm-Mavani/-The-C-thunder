
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int i,j,s,a;


	pf("Enter ending value : ");
	sf("%d",&a);
	for(i=1;i<=a;i++)
	{
	 for(s=a;s>i;s--)
	 {
	 pf(" ");
	 }
	 for(j=i;j>=1;j--)
	 { pf("%d",j);
	 }
	pf("\n");
	}

	getch();


}
