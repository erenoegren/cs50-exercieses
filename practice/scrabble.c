#include <cs50.h>   // string und get_string
#include <ctype.h>  // isupper, islower
#include <stdio.h>  //printf
#include <string.h> // strlen

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // 1. Prompt the user for two words

    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // 2. Compute the score of each word

    int score1 = 0;
    for (int i = 0; i < strlen(word1); i++)
    {
        if (isupper(word1[i]))
        {
            score1 += POINTS[word1[i] - 'A'];
        }
        else if (islower(word1[i]))
        {
            score1 += POINTS[word1[i] - 'a'];
        }
    }

    int score2 = 0;
    for (int i = 0; i < strlen(word2); i++)
    {
        if (isupper(word2[i]))
        {
            score2 += POINTS[word2[i] - 'A'];
        }
        else if (islower(word2[i]))
        {
            score2 += POINTS[word2[i] - 'a'];
        }
    }

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    // 3. Print the winner
    return 0;
}
