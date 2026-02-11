#include <stdio.h>
#include <string.h>

void reverse_string(char str[], int *len);

int main()
{
	char str[10];
	int len=0, i=0;
	printf("Enter the string: ");
	scanf(" %[^\n]", str);

	printf("The entered string is:%s\n", str);

	len = strlen(str);

	reverse_string(str, &len);
	printf("After reversing the string: ");
	printf("%s\n", str);

	return 0;

}

void reverse_string(char str[], int *len)
{
	char temp = 0;
	int i=0, j= *len-1;

	for(i=0; i< *len/2; i++)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
	}

}
