#include<stdio.h>
#define pf printf
#define sf scanf

main()
{
	int a=0,n,sum=0;

	pf("Enter last no.:");
	sf("%d",&n);

	for(a=1;a<=n;a++)
    {
        sum=sum+a;
    }
	pf("\nsum will be : %d",sum);

}
