#include <stdio.h>

void count_digit(int num, int *count);

int main()
{
	int num;
	int count = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	if(num == 0)
	{
		printf("The number of digit is 1\n");
		return 0;
	}


	count_digit(num, &count);
	printf("The number of digits in a given number:%d\n", count);

	return 0;
}

void count_digit(int num, int *count)
{

	int mod = 0;
	int temp = num;

	while(temp != 0)
	{
		mod = temp % 10;
		*count = *count+1;
		temp = temp/10;
	}

}

