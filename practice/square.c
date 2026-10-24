#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 1. Ask for size

    int size;

    do
    {
        size = get_int("Size: ");
    }
    while (size < 1);

    // 2. Print the square

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
