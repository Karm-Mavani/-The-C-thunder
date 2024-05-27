
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	char a;
	clrscr();

	pf("\nEnter M for Monday.\n");
	pf("Enter T for Tuesday.\n");
	pf("Enter W for Wednesday.\n");
	pf("Enter t for Thursday.\n");
	pf("Enter F for Friday.\n");
	pf("Enter S for Saturday.\n");
	pf("Enter s for Sunday.\n");
	pf("\nEnter any character : ");
	sf("%c",&a);

	switch(a)
	{
	 case 'm':
		pf("\nToday is monday");
		break;
	 case 'T':
		pf("\nToday is tuesday");
		break;
	 case 'W':
		pf("\nToday is wednesday");
		break;
	 case 't':
		pf("\nToday is thursday");
		break;
	 case 'F':
		pf("\nToday is friday");
		break;
	 case 'S':
		pf("\nToday is saturday");
		break;
	 case 's':
		pf("\nToday is monday");
		break;


	}


	getch();


}
