#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Kullanıcıdan metin al
    string text = get_string("Text: ");

    // Sayımları gerçekleştir
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // 100 kelime başına düşen harf (L) ve cümle (S) ortalamaları
    float L = ((float) letters / words) * 100;
    float S = ((float) sentences / words) * 100;

    // Coleman-Liau indeksi hesabı
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Sonucu yazdır
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}

int count_words(string text)
{
    int count = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
