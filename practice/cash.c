#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int quarters = cents / 25;
    cents = cents - quarters * 25;

    int dimes = cents / 10;
    cents = cents - dimes * 10;

    int nickels = cents / 5;
    cents = cents - nickels * 5;

    int penny = cents / 1;
    cents = cents - penny * 1;

    int total = quarters + dimes + nickels + penny;
    printf("%i\n", total);

    return 0;
}
