#include <stdio.h>

int myFunction(char name[])
{
    printf("Hello %s\n",name);
}
int main()
{
    myFunction("Abrar");
    myFunction("Fardeen");
    myFunction("Abdul");
    myFunction("Mujju");
    return 0;
}
