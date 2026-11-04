#include <stdio.h>

static int number = 50;

void display()
{
    printf("Static global variable = %d\n", number);
}

int main()
{
    printf("Inside main: %d\n", number);

    display();

    return 0;
}