#include <stdio.h>
#include <string.h>

void find_string_length(char str[], int size, int *length);

int main()
{
	char str[10];
	printf("Enter the string: ");
	scanf(" %[^\n]", str);

	int length = 0, i = 0;

	printf("The entered string is:%s\n", str);

	find_string_length(str, 10, &length);
	printf("The string length is:%d\n", length);

	return 0;

}

void find_string_length(char str[], int size, int *length)
{
	int i = 0;
	while(str[i] != '\0')
	{

		(*length)++;
		i++;
	}

}

