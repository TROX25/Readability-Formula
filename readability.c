#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


//Funkcje
int lettersInText(string xyz);
int spacesInText (string xyz);
int sentencesInText (string xyz);
//Funkcje

//Zmienne
int i;
int len;
//Zmienne

int main(void)
{
    string x = get_string("Text: ");

    int letterCount = lettersInText(x);  // liczy ilosc liter

    //printf("ilość liter: %i\n", letterCount);

    int wordCount = spacesInText(x) + 1; // liczy ilosc słów

    //printf("ilość słów: %i\n", wordCount);

    int sentenceCount = sentencesInText(x);

    //printf("ilość zdań: %i\n", sentenceCount); // liczy ilosc zdan

    float L = ((float)letterCount / (float)wordCount) * 100;
    float S = ((float)sentenceCount / (float)wordCount) * 100;

    float ColemanLiauIndex = (0.0588 * L) - (0.296 * S) - 15.8;

    //printf("%f\n",(ColemanLiauIndex));

    if (round(ColemanLiauIndex) >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (round(ColemanLiauIndex) < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %g\n", round(ColemanLiauIndex));
    }

}




//FUNKCJE
int spacesInText (string xyz)
{
int spaces=0;
    for ( i = 0, len = strlen(xyz); i < len; i++)
    {
        if (isspace(xyz[i]))
        {
            spaces++;
        }
        else if (isspace(xyz[i]))
        {
            continue;
        }
    }
    return spaces;
}

int sentencesInText (string xyz)
{
    int sentences = 0;
    for ( i = 0, len = strlen(xyz); i < len; i++)
    {
        if (xyz[i] == '.' || xyz[i] == '?' || xyz[i] == '!' )
        {
            sentences++;
        }
        else
        {
            continue;
        }
    }
    return sentences;
}


int lettersInText(string xyz)
{
    int letters=0;
    for ( i = 0, len = strlen(xyz); i < len; i++)
    {
        if (isalpha(xyz[i]))
        {
            letters++;
        }
        else if (isspace(xyz[i]))
        {
            continue;
        }
    }
    return letters;
}

