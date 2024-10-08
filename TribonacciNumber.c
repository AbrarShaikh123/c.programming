#include<stdio.h>
int main()
{
    int n,a=1,b=2,c=3,d,i;
    printf("Enter the term:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d+",a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
}