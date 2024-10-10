#include<stdio.h>

int main() {
    int rows, i, j, k;

    // Get the number of rows for the reverse pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = rows; i >= 1; i--) {

        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars with space
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
