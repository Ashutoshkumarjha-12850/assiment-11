#include <stdio.h>

void display()
{
    auto int a = 0;
    static int s = 0;

    a++;
    s++;

    printf("Automatic = %d, Static = %d\n", a, s);
}

int main()
{
    display();
    display();
    display();
    display();

    return 0;
}