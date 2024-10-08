#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
        count++;    
    }
}
    if(count==0)
    {
    printf("Prime number");
    }
    else
    {
    printf("Not prime Number");
    }
    return 0;
}