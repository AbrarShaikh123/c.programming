#include<stdio.h>
#include<string.h>  // String functions ke liye library include karna zaroori hai

int main() {
    char name[20];  // Ek string declare ki jo 20 characters tak store kar sakti hai

    // User se string input lena
    printf("Enter your name: ");
    scanf("%s", name);

    // String ko print karna
    printf("Assalamualaikum, %s\n", name);

    // String length ko print karna
    int length = strlen(name);  // strlen() function ka use karke length find ki
    printf("Length of your name: %d\n", length);

    return 0;
}
