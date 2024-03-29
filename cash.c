#include <cs50.c>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i Coins\n", coins);
    for (int i = 0; i < coins; i++)
    {
        printf("* ");
    };

    printf("\n");
    if (quarters > 0)
    {
        printf("%i Quarters\n", quarters);
    }
    if (dimes > 0)
    {
        printf("%i Dimes\n", dimes);
    }
    if (nickels > 0)
    {
        printf("%i Nickels\n", nickels);
    }
    if (pennies > 0)
    {
        printf("%i Pennies\n", pennies);
    }
}

int get_cents(void)
{
    // TODO
    int change;

    do
    {
        change = get_int("Change Owed: ");
    } while (change < 0);
    return change;
}

int calculate_quarters(int cents)
{
    int i = 0;
    while (cents >= 25)
    {
        cents -= 25;
        i++;
    };
    // TODO
    return i;
}

int calculate_dimes(int cents)
{
    int i = 0;
    while (cents >= 10)
    {
        cents -= 10;
        i++;
    };
    // TODO
    return i;
}

int calculate_nickels(int cents)
{
    int i = 0;
    while (cents >= 5)
    {
        cents -= 5;
        i++;
    };
    // TODO
    return i;
}

int calculate_pennies(int cents)
{
    int i = 0;
    while (cents >= 1)
    {
        cents -= 1;
        i++;
    };
    // TODO
    return i;
}
