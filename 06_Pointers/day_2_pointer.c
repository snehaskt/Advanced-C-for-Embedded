#include <stdio.h>
#include <stdint.h>


int main()
{
	int arr[5];

	printf("Enter the array Elemenst: ");

	for(int i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\n");

	//Array of pointer
	int *ptr1[5];

	//pointer to an array
	int (*ptr2)[5] = &arr;

	printf("Array elements using normal array indexing: ");

	for(int i=0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	//passing the array elements to array of pointer
	for(int i=0; i<5; i++)
	{
		ptr1[i] = &arr[i];
	}

	printf("Array elements access by array of pointer: ");

	for(int i=0; i<5; i++)
	{
		printf("At %p = %d ",ptr1[i],*ptr1[i]);

	}

	printf("\n");

	printf("Array elements access by pointer to an array: ");

	for(int i=0; i<5; i++)
	{
		printf("At %p = %d ", ptr2[i], *ptr2[i]);

	}

	printf("\n");

	return 0;
}
