#include<stdio.h>
int main()
{
    int a=100;
    int b=400;
    int c=300;
    

    if(a >b && a>c)
    {
        printf("a is largest\n");
    }
    
         else if (a >b && b>c)
        {
            printf("a is largest\n");
        }
        else 
        {
            printf("b is largest\n");
        }
        
    }
    


// // #include <stdio.h>

// // int main() {
// //     int a = 5, b = 10, c = 3;

// //     if (a > b && a > c) {
// //         printf("a is the largest\n");
// //     }
// //     else if (b > a && b > c) {
// //         printf("b is the largest\n");
// //     }
// //     else {
// //         printf("c is the largest\n");
// //     }

// //     return 0;
// // }