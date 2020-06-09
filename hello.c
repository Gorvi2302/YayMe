#include<stdio.h>
main()
{
  int marks;
  printf("Enter marks: ");
  scanf("%d",&marks);
  if(marks>84 && marks<101)
  {
    printf("Grade A");
  }
  else if(marks>69 && marks<85)
  {
    printf("Grade B");
  }
    else if(marks>54 && marks<70)
    { 
      printf("Grade C");
     }
     else if(marks>39 && marks<55)
     {
       printf("Grade D");
     }
     else
             {
               printf("Grade F");
     }
}
      
