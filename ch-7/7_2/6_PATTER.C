
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,i,j,s;
	clrscr();

	pf("Enter ending value : ");
	sf("%d",&a);

	for(i=1;i<=a;i++)
	{
	 for(s=1;s<i;s++)
	 {
	 pf(" ");
	 }
	  for(j=a;j>=i;j--)
	  {
	   pf("%d",j);
	  }
	 pf("\n");
	 }


	getch();


}
