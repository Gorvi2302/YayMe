#include <stdio.h>  
  
// Recursive function to return gcd of a and b  
int gcd(int a, int b)  
{  
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}  
  
// Function to return LCM of two numbers  
int lcm(int a, int b)  
{  
    return (a*b)/gcd(a, b);  
}  
  
int main()  
{  
    int a=0,b=0;
    printf("Enter two numbers whose LCM you want: ")  ;
    scanf("%d %d",&a,&b);
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));  
    return 0;  
}  
