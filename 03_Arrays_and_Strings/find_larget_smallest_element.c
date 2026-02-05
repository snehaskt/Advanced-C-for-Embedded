#include <stdio.h>

int find_smalest_element(int arr[], int size);
int find_largest_element(int arr[], int size);

int main()
{
	int arr[5];
	printf("Enter the array elements: ");
	int smalest_element, largest_element;
	for(int i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}


	smalest_element = find_smalest_element(arr, 5);
	printf("The smallest element in the array is:%d\n", smalest_element);


	largest_element = find_largest_element(arr, 5);
	printf("The largest element in the array is:%d\n", largest_element);

	return 0;
}

int find_smalest_element(int arr[], int size)
{
	int smalest_element = arr[0];
	for(int i=0; i<size; i++)
	{
		if(arr[i] < smalest_element)
		{
			smalest_element = arr[i];
		}
	}

	return smalest_element;
}

int find_largest_element(int arr[], int size)
{
	int largest_element = arr[0];
	for(int i=0; i<size; i++)
	{
		if(arr[i] > largest_element)
		{
			largest_element = arr[i];
		}
	}

	return largest_element;
}

