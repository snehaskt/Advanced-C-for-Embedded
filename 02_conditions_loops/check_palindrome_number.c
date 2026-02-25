#include <stdio.h>

int main()
{
	int num;
	int temp;
	int rev_num = 0;
	int count = 0;


	printf("Enter the number: ");
	scanf("%d", &num);

	temp = num;

	while(temp > 0)
	{
		rev_num = rev_num*10 + (temp%10);
		temp = temp/10;

	}


	if(rev_num == num)
		printf("The number is palindrome\n");

	else
		printf("The number is not a palindrome\n");


	return 0;
}

	







	
