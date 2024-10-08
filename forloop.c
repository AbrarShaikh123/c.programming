#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		 if(i<n)
	 	 printf(",");
	}
	  printf(".\n");
	return 0;
}