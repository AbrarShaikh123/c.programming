#include<stdio.h>
int main()
{
    int a[100],size,i,max;
    printf("Enter Size of Array:");
    scanf("%d",&size);
    printf("Enter value of Array:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
      // [10 ,20, 30, 40, 50]
     //   10,   1,  2,  3, 4
  
    max=a[0];
    for(i=0; i<size; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
     }
    printf("Maximum value of Array:%d",max);
    return  0;
}                                                                                                                     

