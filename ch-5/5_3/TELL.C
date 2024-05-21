
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,b,c,d;
	clrscr();

	pf("Enter 1 for english\n");
	pf("Enter 2 for hindi\n");
	pf("Enter 3 for gujrati\n");
	pf("\nEnter your choice :");
	sf("%d",&a);

	switch(a)
	{
	 case 1:
		pf("\n\nenter 1 for internet recharge");
		pf("\nenter 2 for top-up recharge");
		pf("\nenter 3 for special recharge");
		pf("\nenter your choice :");
		sf("%d",&b);
		switch(b)
		{
		 case 1:
			pf("\nyou have successfully done a internet recharge");
			break;
		 case 2:
			pf("\nyou have successfully done a top-up recharge");
			break;
		 case 3:
			pf("\nyou have successfully done a special recharge");
			break;
		 default:
			pf("\ninvalid choice....");
		}
		break;
	 case 2:
		pf("\ninternet recharge ke liye 1 dabaye!");
		pf("\ntop-up recharge ke liye 2 dabaye!");
		pf("\nspecial recharge ke liye 3 dabaye!");
		pf("\n\nenter your choice : ");
		sf("%d",&c);
		switch(c)
		{
		 case 1:
			pf("\naapne successfully internet recharge kar liya hai! ");
			break;
		 case 2:
			pf("\naapne successfully top-up recharge kar liya hai!");
			break;
		 case 3:
			pf("\naapne successfully special recharge kar liya hai!");
			break;
		 default:
			pf("\ninvalid choice....");

		}
		break;
	 case 3:
		pf("\ninternet recharge mate 1 dabavo!");
		pf("\ntop-up recharge mate 2 dabavo!");
		pf("\nspecial recharge mate 3 dabavo!");
		pf("\nenter your choice : ");
		sf("%d",&d);
		switch(d)
		{
		 case 1:
			pf("\ntame successfully internet recharge karyo chhe! ");
			break;
		 case 2:
			pf("\ntame successfully top-up recharge karyo chhe!");
			break;
		 case 3:
			pf("\ntame successfully special recharge karyo chhe!");
			break;
		 default:
			pf("\ninvalid choice....");

		}
		break;
		default:
			pf("\ninvalid choice....");
	 }



	getch();


}
