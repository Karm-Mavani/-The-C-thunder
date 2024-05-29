
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	char i='A',j='E';
	clrscr();

	for(i='A';i<='E';i++)
	{
	 for(j=i;j>='A';j--)
	 {
	 pf("%c",j);
	 }
	pf("\n");

	}

	getch();


}

