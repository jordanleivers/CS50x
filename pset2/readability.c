#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)

{
    // prompt user for text to anaylize
    string text = get_string("Text: ");
    // count the number of letters in the string
    int letter_count = strlen(text);
    int letter = 0;
    for (int i = 0; (i < letter_count); i++)
    {
        if (isalpha(text[i]))
        {
            letter = letter + 1;
        }
    }
    // count the total of words in the string
    int symbol_count = strlen(text);
    int word_count = 1;
    for (int i = 1; (i < symbol_count); i++)
    {

        if ((isspace(text[i])) && (isalpha(text[i + 1])))
        {
            word_count = word_count + 1;
        }
    }
    // find the average number of letters per 100 words in the string
    float L = ((float)letter / (float)word_count) * 100;

    // count the total sentences in the string
    int sentence_count = 0;
    for (int i = 0; (i < symbol_count); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentence_count = sentence_count + 1;
        }
    }
    // calculate the grade
    int final_grade;
    // find the average number of sentences per 100 words in the string
    float S = ((float)sentence_count / (float)word_count) * 100;
    float grade = 0.0588 * L - 0.296 * S - 15.8;

    // adjust the high decimal 8 to round down instead of up - error with Simple/Complex Sentences
    if (grade >= 8.0 && grade <= 8.8)
    {
        final_grade = 8;
    }
    else
    {
        final_grade = round(grade);
    }
    if (final_grade >= 1 && final_grade <= 16)
    {
        printf("Grade %i\n", final_grade);

    }
    // compare if the grade is below Grade 1 or Higher than Grade 6
    else
    {
        if (final_grade < 1)
        {
            printf("Before Grade 1\n");

        }
    }
    {
        if (final_grade > 16)
        {
            printf("Grade 16+\n");
        }
    }
}