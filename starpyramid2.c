#include<stdio.h>
int main()

{
    int rows, i, j, k;

    // Get the number of rows for the pyramid
    printf("Enter the number of rows:");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        // Print spaces before stars
        for ( j= 1; j<= rows - i; j++) {
            printf(" ");

        }

        // Print stars
        for (k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
