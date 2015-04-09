#include<stdio.h>
 
int main()
{
   int a, b, c ,v;
 
   printf("Enter two numbers to add\n");
   scanf("%d%d%v",&a,&b,&v);
   a+=1;
   b+=1;
   c = a + b + v;
   c-=3;
   c++;
   c+=a;
   v-=2;
   v+=3;
   a--;
   b=a+b;
   c=a+b+c;
   
   printf("Sum of entered numbers = %d\n",c);
   printf("Sum of entered numbers = %d\n",a);
 
   return 0;
}
