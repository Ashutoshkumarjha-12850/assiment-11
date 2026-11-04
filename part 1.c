#include <stdio.h>

int main()
{
    printf("Before entering the block\n");

    {
        auto int x = 10;
        printf("Inside block: x = %d\n", x);
    }

    printf("Block exited. x is destroyed.\n");

    return 0;
}