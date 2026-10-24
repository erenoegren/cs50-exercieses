#include <cs50.h>
#include <stdio.h>
int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    // Print the pyramid

    for (int i = 0; i < height; i++)
    {
        for (int b = 0; b < height - (i + 1); b++)
        {
            printf(" ");
        }
        for (int a = 0; a < i + 1; a++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
