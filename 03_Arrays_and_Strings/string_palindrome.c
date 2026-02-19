#include <stdio.h>
#include <string.h>

int check_palindrome(char str[], int i, int j);

int main()
{
	char str[10];
	int len = 0;
	int i = 0, j;
	printf("Enter the string: ");
	scanf(" %9[^\n]", str);


	len = strlen(str);

	len = len - 1;

	if(check_palindrome(str, i, len))
	{
		printf("The enterd string is palindrome\n");
	}

	else
	{
		printf("The entered string is not a palindrome\n");
	}

	return 0;

}

int check_palindrome(char str[], int i, int j)
{

	if(i >= j)
	{
		return 1;
	}


	if (str[i] != str[j])
	{
		return 0;

	}


	return check_palindrome(str, ++i, --j);

}
