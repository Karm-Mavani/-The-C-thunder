
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	char a;
	clrscr();

	pf("Enter anything : ");
	sf("%c",&a);

	if((a>='A' && a<='Z') || (a>='a' && a<='z'))
	{
	 pf("This is character...");

	}
	else if(a>='0' && a<='9')
	{
	 pf("This is number.....");

	}
	else
	{
		pf("This is Spical Character...");
	}



	getch();


}

