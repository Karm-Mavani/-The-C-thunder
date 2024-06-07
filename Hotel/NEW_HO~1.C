
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	int a,c,d,price=0;
	char b='b';
	clrscr();

	pf("\033[31m\n");
	pf("\n          \t\t **WELCOME TO SHREE KRISHNA HOTEL**\n\n");
	//for color	pf("\033[33;44myellow on blue\n");
	pf("\033[0m\n");

	pf("\nEnter 1 for AC ROOM");
	pf("\nEnter 2 for NON-AC ROOM\n");
	pf("\nEnter any no. as your choice : ");
	sf("%d",&a);
//1
switch(a)
{
	case 1:
	       pf("\n\nYour choice is AC room....");
	       getch();
	       clrscr();
	       pf("\033[33;44m");
	       pf("\n\nIn AC room....");
	       pf("\033[0m");
	       pf("\nEnter A for family room\n");
	       pf("Enter B for couple room\n");
	       pf("Enter C for one person room\n");
	       pf("\nEnter any character from This List : ");
	       fflush(stdin);
	       sf("%c",&b);

  //2

  switch(b)
  {
		 case 'a':
		 case 'A':

		       clrscr();
		       pf("\n\nEnter 1 for premium room\n");
		       pf("Enter 2 for medium room\n");
		       pf("Enter 3 for cheap room\n");
		       pf("Enter your choice : ");
		       sf("%d",&c);
//3
switch(c)
{
		 case 1:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 2:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 3:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 default:
		 clrscr();
		 pf("Invalid value......");
//3
}

    break;

		  case 'b':
		  case 'B':

		       clrscr();
		       pf("\n\nEnter 1 for premium room\n");
		       pf("Enter 2 for medium room\n");
		       pf("Enter 3 for cheap room\n");
		       pf("Enter your choice : ");
		       sf("%d",&c);
//4
switch(c)
{
		 case 1:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 2:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 3:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 default:
		 clrscr();
		 pf("Invalid value......");
//4
}
		  case 'c':
		  case 'C':

		       clrscr();
		       pf("\n\nEnter 1 for premium room\n");
		       pf("Enter 2 for medium room\n");
		       pf("Enter 3 for cheap room\n");
		       pf("Enter your choice : ");
		       sf("%d",&c);
//4
switch(c)
{
		 case 1:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 2:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 3:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 default:
		 clrscr();
		 pf("Invalid value......");
//4
}



     break;
		default:
			     clrscr();
			     pf("Invalid choice.......");
   //2
   }
    break;

    case 2:
	       pf("\nYour choice is NON-AC room.....");
	       getch();
	       clrscr();
	       pf("\033[33;44m");
	       pf("\nIn NON-AC ROOMS");
	       pf("\033[0m\n");
	       pf("\n\nEnter A for family room\n");
	       pf("Enter B for couple room\n");
	       pf("Enter C for one person room\n");
	       pf("\nEnter any character from This List : ");
	       fflush(stdin);
	       sf("%c",&b);
     //5
     switch(b)
     {
	       case 'a':
	       case 'A':
		     clrscr();
		       pf("\n\nEnter 1 for premium room\n");
		       pf("Enter 2 for medium room\n");
		       pf("Enter 3 for cheap room\n");
		       pf("Enter your choice : ");
		       sf("%d",&c);
//3
switch(c)
{
		 case 1:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 2:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 3:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 default:
		 clrscr();
		 pf("Invalid value......");
//3
}

    break;

	       case 'b':
	       case 'B':
		   clrscr();
		       pf("\n\nEnter 1 for premium room\n");
		       pf("Enter 2 for medium room\n");
		       pf("Enter 3 for cheap room\n");
		       pf("Enter your choice : ");
		       sf("%d",&c);
//3
switch(c)
{
		 case 1:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 2:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 3:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 default:
		 clrscr();
		 pf("Invalid value......");
//3
}

    break;


	       case 'c':
	       case 'C':
		    clrscr();
		       pf("\n\nEnter 1 for premium room\n");
		       pf("Enter 2 for medium room\n");
		       pf("Enter 3 for cheap room\n");
		       pf("Enter your choice : ");
		       sf("%d",&c);
//3
switch(c)
{
		 case 1:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 2:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 case 3:
		       clrscr();
		       pf("\n\nEnter 0 for ground floor room\n");
		       pf("Enter 1 for 1st floor room\n");
		       pf("Enter 2 for 2nd floor room\n");
		       pf("Enter 3 for 3rd floor room\n");
		       pf("Enter 4 for top floor room\n");
		       pf("\nChoose the floor no. : ");
		       sf("%d",&d);
		       break;
		 default:
		 clrscr();
		 pf("Invalid value......");
//3
}

    break;



	   default:
	   clrscr();
	   pf("Invalid choice......");
    //5
    }

 default:clrscr();
	 pf("invalid choice......");
 //1
 }
    clrscr();
    if(a<=2)
 //Main
 {
	    pf("--------------------------------------------------------------------------------");
	    pf("|\t\t\t\t\t\t\t\t\t       |");
	    pf("|\t\t\t \033[31m\     **SHREE KRISHNA HOTEL**\t\t\t \033[0m\      |");
	//for color	pf("\033[33;44myellow on blue");
	    pf("|  Customer Name : KARM \t\t\t\t\t\t       |");
	    pf("|  Customer Email: Karm1234@gmail.com\t\t\t\t\t       |");



    switch(a)
    //1
    { case 1:
	    pf("|                                                                              |");
	    pf("|  AC ROOM\t\t\t\t\t\t\t\t       |");
	   break;
     case 2:
	    pf("|                                                                              |");
	    pf("|  NON-AC ROOM                                                                 |");
     //1
     }
     switch(b)
      //2
      {
	case 'a':
	case 'A':
	    pf("|  ROOM TYPE : FULL FAMILY ROOM                                                |");
	    break;
	case 'b':
	case 'B':
	    pf("|  ROOM TYPE : COUPLE PERSONS-ROOM                                             |");
	    break;
	case 'c':
	case 'C':
	       pf("|  ROOM TYPE : ONE PERSONS-ROOM                                             |");
	    break;
      //2
      }
     switch(c)
     //3
     {
      case 1:
	       pf("|  ROOM QUALITY : PREMIUM                                                      |");
	       break;
      case 2:
	       pf("|  ROOM QUALITY : MEDIUM                                                       |");
	       break;
      case 3:
	       pf("|  ROOM QUALITY : CHEAP                                                        |");
	       break;

     }
    //4
     switch(d)
      //5
      {
	 case 0 :
	    pf("|  FLOOR     : GROUND FLOOR                                                    |");
	    break;
	 case 1 :
	    pf("|  FLOOR     : FIRST FLOOR                                                     |");
	    break;
	 case 2 :
	    pf("|  FLOOR     : SECOND FLOOR                                                    |");
	    break;
	 case 3 :
	    pf("|  FLOOR     : THIRD FLOOR                                                     |");
	    break;
	 case 4 :
	    pf("|  FLOOR     : TOP FLOOR                                                       |");
	    break;

      //6
      }



	     pf("|                                                                              |");
	     pf("|                                                                              |");
	     pf("--------------------------------------------------------------------------------");


//Main
}
    getch();



}


