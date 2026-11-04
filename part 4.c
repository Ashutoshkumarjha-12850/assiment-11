#include <stdio.h>

void counter()
{
    static int count = 0;

    count++;

    printf("Function called %d time(s)\n", count);
}

int main()
{
    counter();
    counter();
    counter();
    counter();
    counter();

    return 0;
}