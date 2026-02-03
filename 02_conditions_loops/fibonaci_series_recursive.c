#include <stdio.h>

int fib(int n);

int main()
{
	int n;
	int a = 0, b = 1;
	int result = 0;



	printf("Enter the n value to print Fibonacci upto n: ");
	scanf("%d", &n);


	if( n <= 0)
		printf("Inalid Input\n");

	if( n >= 1)
		printf("%d ", a);

	if( n >= 2)
		printf("%d ", b);

	for(int i = 2; i < n; i++)
	{
		printf("%d ", fib(i));
	}

	printf("\n");


	return 0;

}

int fib(int n)
{
	if(n == 0)
	{
		return 0;
	}

	if(n == 1)
	{
		return 1;
	}


	return fib(n-1) + fib(n-2);

}


