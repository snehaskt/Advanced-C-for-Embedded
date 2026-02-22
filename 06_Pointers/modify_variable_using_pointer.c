#include <stdio.h>

int pass_by_reference(int *n1, int n2);
int main()
{
	int num1 = 10;
	int num2 = 20;

	int ret = 0;
	printf("The num1-%d, num2-%d before passing the funtion\n", num1, num2);
	ret = pass_by_reference(&num1, num2);

 	printf("The num1-%d, num2-%d after passing the funtion\n", num1, ret);
 
	return 0;
}

int pass_by_reference(int *n1, int n2)
{
	*n1 = *n1+1;

	n2 = n2+1;

	return n2;
}
