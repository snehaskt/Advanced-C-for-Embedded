#include <stdio.h>

int main()
{
	int num = 10;

	int *ptr1 = &num;

	int **ptr2 = &ptr1;

	*ptr1 = (*ptr1) + 1;

	printf("Single pointer:%d\n", *ptr1);

	**ptr2 = (*(*ptr2)) + 1;

	printf("Multipointer:%d\n", **ptr2);

	return 0;

}

