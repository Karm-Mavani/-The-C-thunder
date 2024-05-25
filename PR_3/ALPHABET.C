
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{       int i;
	char a='a';

	clrscr();

	pf("Enter the gap between alphabet : ");
	sf("%d",&i);
	pf("\n");

	while(a<='z')
	{
	 if(i<=9)
	 {
	  pf("%c\t",a);
	  a=a+i;

	 }
	 else
	 {
	   pf("invalid number.....");
	   break;
	 }
	}
	getch();


}
