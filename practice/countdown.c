#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int start;
    do
    {
        start = get_int("Start: ");
    }
    while (start < 1);

    for (int i = start; i >= 1; i--)
    {
        printf("%i\n", i);
    }
    printf("Liftoff!\n");
    return 0;
}
