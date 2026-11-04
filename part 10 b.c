#include <stdio.h>

extern void deposit(float amount);
extern void withdraw(float amount);
extern float getBalance();

int main()
{
    printf("Initial Balance: %.2f\n", getBalance());

    deposit(500.0);

    printf("Balance: %.2f\n", getBalance());

    withdraw(300.0);

    printf("Final Balance: %.2f\n", getBalance());

    return 0;
}
