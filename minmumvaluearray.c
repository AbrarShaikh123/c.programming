#include<stdio.h>
int main()
{
    int a[100],size,i,min;
    printf("Enter Size of Array:");
    scanf("%d",&size);
    printf("Enter value of Array:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0; i<size; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Manimum value of Array:%d.",min);
    return 0;
}  


