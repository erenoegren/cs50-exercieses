#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // 1. Ask for minutes

    int minutes;

    do
    {
        minutes = get_int("Minutes: ");
    }
    while(minutes < 0);

    // 2. Calculate hours

    int hours = minutes / 60;

    // 3. Calculate the rest

    int rest = minutes - (hours * 60);

    // 4. Print the result

    printf("%i hours and %i minutes.\n", hours, rest);


    return 0;
}
