#include<stdio.h>

int main()
{
	int a, b, c, d;
	int temp = 0;

	printf("Enter the first two numbers to swap: ");
	scanf("%d %d", &a, &b);

	printf("Enter the next two numbers to swap: ");
	scanf("%d%d", &c, &d);

	/* a = 1, b = 2
	 * after swap a = 2, b = 1
	 * */
	temp = a;
	a = b;
	b = temp;

	/*c = 3, d = 4
	 * after swap c = 4, d = 3
	 * */

	c = c+d;
	d = c-d;
	c= c-d;


	printf("First two numbers after swaping using a temp variable are:%d, %d\n", a, b);
	printf("Next two numbers after swaping without using a temp variable are:%d, %d\n", c, d);

	return 0;
}


