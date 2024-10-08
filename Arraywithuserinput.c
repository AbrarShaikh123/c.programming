// #include<stdio.h>
// int main()
// {
//   int a[5],i;
  
//   printf("Enter Array Elements:");
//   for(i=0;i< 5;i++)
//  {
//   scanf("%d",&a[i]);
//  }
  
// printf("Array Elements is");
// for(i=0;i< 5;i++)
// {
// printf("\nElements:%d. ",a[i]);
// }
// {
//  //printf("");
// return 0;
// }
// }

#include <stdio.h>

int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  printf("Enter the number:");
  scanf("%d",myNumbers);
  myNumbers[0] =33;

  printf("%d", myNumbers[0]);
  printf("\n%d", myNumbers[1]);
  printf("\n%d", myNumbers[2]);
  printf("\n%d", myNumbers[3]);
 
  return 0;
}
