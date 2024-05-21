#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,d,g,h,i;
	char b='c',e='f';
	clrscr();

	pf("\033[31m\n");
	pf("\n          \t\t **WELCOME TO SHREE KRISHNA HOTEL**\n\n");
	//for color	pf("\033[33;44myellow on blue\n");
	pf("\033[0m\n");

	pf("\nEnter 1 for AC ROOM");
	pf("\nEnter 2 for NON-AC ROOM\n");
	pf("\nEnter any no. as your choice : ");
	sf("%d",&a);

	switch(a)
	{
	case 1:
	       pf("\n\nYour choice is AC room....");
	       pf("\nEnter any no. to next :");
	       sf("%d",&a);

	       pf("\033[33;44m");
	       pf("\n\nin AC room....");
	       pf("\033[0m");
	       pf("\nEnter A for 4-person room\n");
	       pf("Enter B for 2-person room\n");
	       pf("\nEnter any character from This List : ");
	       fflush(stdin);
	       sf("%c",&b);

	       switch(b)
	       {
		    case 'a':
		    case 'A':

		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       printf("I am Running....");


		       break;

		    case 'b':
		    case 'B':

		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&g);

		       switch(g)
		       {
			      case 0:

				     pf("\nYou have booked room at groud floor");
				     pf("\nYour charges will be 2500\\-only ");
			      case 1:

				     pf("\nYou have booked room at 1st floor");
				     pf("\nYour charges will be 3000\\-only ");
			      case 2:

				     pf("\nYou have booked room at 2nd floor");
				     pf("\nYour charges will be 3500\\-only ");
			      case 3:

				     pf("\nYou have booked room at 3rd floor");
				     pf("\nYour charges will be 4000\\-only ");
			      case 4:
				     pf("\nYou have booked room at top floor");
				     pf("\nYour charges will be 5000\\-only ");
			      default:
				     pf("your choice is invalid.....");
			}
			break;
		      default:

			      pf("Invalid choice.......");
	       }

	       break;

	case 2:
	clrscr();
	       pf("\nYour choice is NON-AC room.....");
	       pf("\033[33;44m");
	       pf("\nIn NON-AC ROOMS");
	       pf("\033[0m\n");
	       pf("\n\nEnter C for famaly room\n");
	       pf("Enter D for 2-person room\n");
	       pf("\nEnter any character from This List : ");
	       fflush(stdin);
	       sf("%c",&e);

	       switch(b)
	       {
		    case 'c':
		    case 'C':
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&i);

		       switch(i)
		       {
			      case 0:
				     clrscr();
				     pf("\nYou have booked room at groud floor");
				     pf("\nYour charges will be 3500\\-only ");
			      case 1:
				     clrscr();
				     pf("\nYou have booked room at 1st floor");
				     pf("\nYour charges will be 4000\\-only ");
			      case 2:
				     clrscr();
				     pf("\nYou have booked room at 2nd floor");
				     pf("\nYour charges will be 4500\\-only ");
			      case 3:
				     clrscr();
				     pf("\nYou have booked room at 3rd floor");
				     pf("\nYour charges will be 5000\\-only ");
			      case 4:
				     clrscr();
				     pf("\nYou have booked room at top floor");
				     pf("\nYour charges will be 6000\\-only ");
			      default:
				     clrscr();
				     pf("your choice is invalid.....");
			}

		       break;

		    case 'd':
		    case 'D':
		    clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&h);

		       switch(h)
		       {
			      case 0:
				     clrscr();
				     pf("\nYou have booked room at groud floor");
				     pf("\nYour charges will be 1500\\-only ");
			      case 1:
				     clrscr();
				     pf("\nYou have booked room at 1st floor");
				     pf("\nYour charges will be 2000\\-only ");
			      case 2:
				     clrscr();
				     pf("\nYou have booked room at 2nd floor");
				     pf("\nYour charges will be 2500\\-only ");
			      case 3:
				     clrscr();
				     pf("\nYou have booked room at 3rd floor");
				     pf("\nYour charges will be 3000\\-only ");
			      case 4:
				     clrscr();
				     pf("\nYou have booked room at top floor");
				     pf("\nYour charges will be 3500\\-only ");
			      default:
				     clrscr();
				     pf("your choice is invalid.....");
			}

	       break;


	default:
		clrscr();
		pf("Invalid choice......");
	}



	getch();
}
}

