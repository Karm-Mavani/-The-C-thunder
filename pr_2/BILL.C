
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	float unit,total,sur,amt;
	clrscr();

	pf("enter the electricity units : ");
	sf("%f",&unit);

	if(unit<=50)
	{
	 amt=unit* 0.50;
	}

	else if (unit<=150)
	{
	 amt=25+(unit-50)*0.75;
	}

	else if (unit<=250)
	{
	 amt=100+(unit-150)*1.2;
	}


	else if(unit>=251)
	{
	 amt=220+(unit-250)*1.5;
	}

	sur=(amt*20)/100;
	total=sur+amt;

       pf("\nTotal Bill is (inc. all of the tax) : %.2f",total);



	getch();


}
