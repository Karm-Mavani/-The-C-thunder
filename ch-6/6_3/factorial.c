#include<stdio.h>
#define pf printf
#define sf scanf

main()
{
	int a=0,n,mul=1;

	pf("Enter last no.:");
	sf("%d",&n);

	for(a=1;a<=n;a++)
    {
        mul=mul*a;
    }
	pf("\nFactorial will be : %d",mul);

}
