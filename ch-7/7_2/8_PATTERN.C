#include <stdio.h>
#include <conio.h>
#define pf printf
main()
{
   int i,j,s,a;
   clrscr();

   pf("Enter ending no. : ");
   scanf("%d",&a);

   pf("\n");

   for(i=a;i>=1;i--)
   {
	for(j=1;j<=i;j++)
	{
		pf("%d",j);
	}

	for(s=a;s>i;s--)
	{
		pf("  ");
	}
	for(j=i;j>=1;j--)
	{
		pf("%d",j);
	}
	pf("\n");
   }
    for(i=1;i<=a;i++)
   {
	for(j=1;j<=i;j++)
	{
		pf("%d",j);
	}

	for(s=a;s>i;s--)
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








