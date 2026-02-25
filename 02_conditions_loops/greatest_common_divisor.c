#include <stdio.h>

int main()
{
	int num1, num2;
	int i=1;
	int temp = 0;
	int min = 0;
	printf("Enter the num1 and num2: ");
	scanf("%d %d", &num1, &num2);

	if(num1 > num2)
		min = num2;

	else
		min = num1;



	while(i <= min)
	{
		if(num1%i == 0 && num2%i == 0)
		{
			temp = i;
		}


		i++;

	}

	printf("The greatest common divisor of %d and %d is %d\n", num1, num2, temp);

	return 0;
}





