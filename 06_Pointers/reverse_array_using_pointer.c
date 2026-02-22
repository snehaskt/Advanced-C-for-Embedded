#include <stdio.h>

void array_reverse(int *arr, int size);

int main()
{
	int arr[10];

	printf("Enter array elements: ");

	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}


	printf("After reversing the array elements: ");

	array_reverse(arr, 10);
	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}

void array_reverse(int *arr, int size)
{

	int *start = arr;
	int *end = &arr[size - 1];

	int temp = 0;

	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

