#include <stdio.h>

extern int number;

int main()
{
    printf("Value of global variable = %d\n", number);

    return 0;
}