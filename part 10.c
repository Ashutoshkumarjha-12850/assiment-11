#include <stdio.h>

static float balance = 1000.0;

void deposit(float amount)
{
    balance = balance + amount;

    printf("Deposited: %.2f\n", amount);
}

void withdraw(float amount)
{
    if (amount <= balance)
    {
        balance = balance - amount;
        printf("Withdrawn: %.2f\n", amount);
    }
    else
    {
        printf("Insufficient balance\n");
    }
}

float getBalance()
{
    return balance;
}