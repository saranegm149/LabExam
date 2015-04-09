#include<stdio.h>
 
int main()
{
   int a, b, c ,v;
 
   printf("Enter two numbers to add\n");
   scanf("%d%d%v",&a,&b,&v);
 
   c = a + b + v;
   c-=3;
   
 
   printf("Sum of entered numbers = %d\n",c);
 
   return 0;
}
