#include <stdio.h>

int main()
{
    char str[10];
    char str_vowel[10], str_consonants[10], str_digit[10], str_special[10];

    int i = 0;
    int vowel_count = 0, consonants_count = 0, digit_count = 0, special_count = 0;

    printf("Enter the string: ");
    scanf(" %9[^\n]", str);

    while(str[i] != '\0')
    {
        char ch = str[i];

        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            str_vowel[vowel_count++] = ch;
        }
        else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        {
            str_consonants[consonants_count++] = ch;
        }
        else if(ch>='0' && ch<='9')
        {
            str_digit[digit_count++] = ch;
        }
        else
        {
            str_special[special_count++] = ch;
        }

        i++;
    }

    str_vowel[vowel_count] = '\0';
    str_consonants[consonants_count] = '\0';
    str_digit[digit_count] = '\0';
    str_special[special_count] = '\0';

    if(vowel_count > 0)
        printf("Vowels: %s -> %d\n", str_vowel, vowel_count);

    if(consonants_count > 0)
        printf("Consonants: %s -> %d\n", str_consonants, consonants_count);

    if(digit_count > 0)
        printf("Digits: %s -> %d\n", str_digit, digit_count);

    if(special_count > 0)
        printf("Special chars: %s -> %d\n", str_special, special_count);

    return 0;
}

