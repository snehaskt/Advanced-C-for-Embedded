#include <stdio.h>
#include <string.h>

int str_cmp(char str1[], char str2[]);
int main()
{
    char str1[50];
    char str2[50];

    printf("Enter the string1: ");
    scanf("%[^\n]", str1);

   
    printf("Enter the string2: ");
    scanf(" %[^\n]", str2);

    if(str_cmp(str1, str2))
    {
        printf("Both strings are not same\n");
    }

    else
    {
        printf("Both strings are same\n");

    }

    return 0;
}

int str_cmp(char str1[], char str2[])
{
    int i=0;
    int len1, len2;
    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2)
    {
        return 1;
    }

    while(str1[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return 1;
        }

        ++i;
    }

    return 0;
}
