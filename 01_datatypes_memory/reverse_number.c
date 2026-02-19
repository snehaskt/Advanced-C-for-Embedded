#include <stdio.h>

void reverse_number(int num, int *rev_num);

int main()
{
	int num;
	int rev_num = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	if(num < 0)
	{
		printf("Invalid input\n");
		return 0;
	}


	reverse_number(num, &rev_num);
	printf("After reversing the number:%d\n", rev_num);

	return 0;
}

void reverse_number(int num, int *rev_num)
{
	int mod = 0;

	int temp = num;

	while(temp != 0)
	{
		mod = temp % 10;
		*rev_num = ((*rev_num)*10) + mod;
		temp = temp/10;
	}

}
