#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
// Declaration of functions
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
// Determine the grade level of given text using the Coleman-Liau formula
int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
// Calculate the the letters and sentences per 100 words of the text
    float ave_let = (letters * 100.0) / words;
    float ave_sen = (sentences * 100.0) / words;
    float index = 0.0588 * ave_let - 0.296 * ave_sen - 15.8;
// Round the number to an interger Grade level
    int grade = round(index);
    if (grade >= 1 && grade <= 16)
    {
        printf("Grade %i\n", grade);
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
}
// Function to count the number of letters in a given input. Note the <= and >= so that the function is inclusive.
int count_letters(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] >= 'A' && text[i] <= 'z')
        {
            count++;
        }

    }
    return count;
}
// Function to count the number of words in a given input. Note count starts at 1 as we need to account for the last word not having a space.
int count_words(string text)
{
    int count = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
// Function to count the number of sentences in a given text.
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}