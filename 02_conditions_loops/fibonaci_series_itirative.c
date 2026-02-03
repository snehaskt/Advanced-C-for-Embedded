#include <stdio.h>

int main()
{
	int a = 0, b = 1;

	int i = 0;

	int n;

	int next = 0;

	printf("Enter the n value to print the Fibonacci series upto n: ");
	scanf("%d", &n);


	if( n <= 0)
	{
		printf("Inavlid input\n");
		return 0;
	}


	if( n >= 1)
	{
		printf("%d ", a);
	}

	if(n >= 2)
	{
		printf("%d ", b);
	}

	for(i = 2; i < n; i++ )
	{

		next = a + b;
		printf("%d ", next);
		a = b;
		b= next;


	}

	return 0;
}




