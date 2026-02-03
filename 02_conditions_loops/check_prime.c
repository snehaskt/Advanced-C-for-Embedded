#include <stdio.h>


int main()
{
	int n;


	printf("Enter the number: ");
	scanf("%d", &n);

	if(n <= 1)
	{
		printf("Not a prime\n");
		return 0;
	}

	if(n == 2)
	{
		printf("Is a prime\n");
		return 0;
	}

	for(int i = 2; i*i <= n; i++)
	{
		if( n%i == 0)
		{
			printf("Not a prime\n");
			return 0;
		}

	}

	printf("Is prime\n");

	return 0;

}
