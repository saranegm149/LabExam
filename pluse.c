#include<stdio.h>
 
int main()
{
   int a, b, c;
 
   printf("Enter two numbers to add\n");
   scanf("%d%d",&a,&b);
 
   c = a + b;
   c +=2;
 
   printf("Sum of entered numbers = %d\n",c);
 
   return 0;
}
