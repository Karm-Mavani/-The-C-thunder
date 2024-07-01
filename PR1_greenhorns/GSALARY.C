
#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf

main()
{
	float BaseSalary, HRA, DA, TA, GrossSalary;
	//                10%,5%,8%
	

	pf("Enter the Base salary : ");
	sf("%f", &BaseSalary);
	pf("\n");

	// HRA
	HRA = (BaseSalary * 10) / 100;
	pf("HRA will be : %.2f", HRA);

	// DA
	DA = (BaseSalary * 5) / 100;
	pf("\n");
	pf("DA will be : %.2f", DA);

	// TA
	TA = (BaseSalary * 8) / 100;
	pf("\n");
	pf("TA will be : %.2f", TA);

	GrossSalary = BaseSalary + HRA + DA + TA;
	pf("\n\n");
	pf("Gross Slary will be :%.2f ", GrossSalary);

	getch();
}
