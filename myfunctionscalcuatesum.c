#include<stdio.h>
int calcuatesum()

{
   int x=10;
   int y=20;
   
   int sum=x+y;
   
   printf("The sum of x+y is:%d",sum);
   
}


int calcuatesub()
{
int a=50;
int b=20;
int sub=a-b;
printf("\nThe sum of a-b is:%d",sub);
}

int calcuatemul()
{
int n=10;
int m=10;
int mul=n*m;
printf("\nThe mul of n*m is:%d",mul);
}

int main()
{
   calcuatesum();
   calcuatesub();
   calcuatemul();
   return 0;
}