#include<stdio.h>
main()
{
printf("MENU  \n 1.Pizza,Rs.239  \n 2.Burger,Rs.129  \n 3.Pasta,Rs.179  \n 4.French Fries,Rs.99  \n 5.Sandwich,Rs.149  \n Pick an item number: ");
int ch;
scanf("%hd",&ch);
switch(ch)
{
	case 1: printf("You picked Pizza.You have to pay Rs.239 ");
	break;
	case 2: printf("You picked Burger.You have to pay Rs.129");
	break;
	case 3: printf("You picked Pasta.You have to pay Rs.179");
	break;
	case 4: printf("You picked Pasta.You have to pay Rs.99");
	break;
	case 5: printf("You picked Sandwich.You have to pay Rs.149");
	break;
	default: printf("Invalid choice");
}
}
      
