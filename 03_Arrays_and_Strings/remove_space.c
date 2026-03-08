#include <stdio.h>

int main()
{
	int i=0, j=0;
	char str[100];

	printf("Enter the string: ");
	scanf("%[^\n]", str);


	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ')
		{
			str[j++] = str[i];
		}


	}

	printf("The string after removing all spaces: %s\n", str);


	return 0;

}



