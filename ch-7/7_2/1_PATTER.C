
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,i,j,s;
	clrscr();

	pf("Enter last no. : ");
	sf("%d",&a);
	for(i=a;i>=5;i--)
	{
	 for(s=a;s>i;s--)
	 {
	 pf(" ");
	 }
	  for(j=1;j<=i;j++)
	  {
	  pf("%d",j);
	  }
	 pf("\n");
	 }


	getch();


}
