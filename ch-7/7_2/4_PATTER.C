
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

	for(i=a;i>=1;i--)
	{
	 for(s=a;s>i;s--)
	 {
	 pf(" ");
	 }
	  for(j=i;j>=1;j--)
	  {
	  if (j%2==0)
	  {
	  pf("0");
	  }

	  else
	  {
	  pf("1");
	  }

	  }
	 pf("\n");
	 }


	getch();


}
