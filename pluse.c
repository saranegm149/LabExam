#include<stdio.h>
 
int main()
{
   int a, b, c ,v;
 
   printf("Enter two numbers to add\n");
   scanf("%d%d%v",&a,&b,&v);
   a+=1;
   c = a + b + v;
   c-=3;
   c++;
   c+=a;
   
   
 
   printf("Sum of entered numbers = %d\n",c);
 
   return 0;
}
