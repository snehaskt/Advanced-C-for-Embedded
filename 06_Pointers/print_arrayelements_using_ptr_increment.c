#include <stdio.h>

int main()
{
	int arr[5];
	int *ptr;
	printf("Enter the array Elements: ");

	for(int i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}


	ptr = arr;


	printf("Array elements acessing through pointer arithmetic: ");
	for(int i=0; i<5; i++)
	{
		printf("%d ", *(ptr + i));
	}

	printf("\n");

	return 0;
}


