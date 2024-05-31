
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int i,j,s;
	clrscr();


	for(i=5;i>=1;i--)
	{


	  for(j=1;j<=i;j++)
	  {
	   pf("%d",j);
	  }
	   for(s=i;s<=4;s++)
	 {
	 pf("  ");
	 }
	  for(j=i;j>=1;j--)
	  {
	   pf("%d",j);
	   }
	 pf("\n");
	 }




	getch();



}
