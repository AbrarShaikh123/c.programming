#include<stdio.h>

int main()
{
    int x, i, isPrime = 1; // Assuming the number is prime by default
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x <= 1) // Numbers less than or equal to 1 are not prime
    {
        printf("%d is not a prime number.\n", x);
        return 0;   
    }

    // Check divisibility starting from 2 to x-1
    for (i = 2; i < x / 2; i++)
    {
        if (x % i == 0) // If divisible by any number other than 1 and itself
        {
            isPrime = 0; // Not a prime number
            break;
        }
    }

    if (isPrime)
    {
        printf("%d is a prime number.\n", x);
    }
    else
    {
        printf("%d is not a prime number.\n", x);
    }

    return 0;
}
