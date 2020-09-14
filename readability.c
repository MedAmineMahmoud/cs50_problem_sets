#include <stdio.h>
#include <cs50.h>
#include <string.h>

// count_letters function declaration
int count_letters(string text);
// count_word function declaration
int count_words(string input);

int main(void){
    string text = get_string("Text : ");


    printf("%i letter(s)\n", count_letters(text));
    printf("%i word(s)\n", count_words(text));


}
// count_words function definition
int count_words(string input)
{
    int count = 0;
    for( int i = 0; i < strlen(input); i++)
    {
        if (input[i] == ' ')
        {
            count +=1;
        }
    }
    return count+1;
}
// count_letters function definition
int count_letters(string input)
{
    int count = 0;
    for(int i = 0; i < strlen(input); i++)
    {
        if ((input[i] >='a' && input[i] <= 'z' ) || (input[i] >= 'A' && input[i] <= 'Z'))
        {
            count+=1;
        }

    }
    return count;
}


