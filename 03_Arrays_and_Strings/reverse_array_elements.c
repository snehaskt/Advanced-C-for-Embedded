#include <stdio.h>

int array_reversel(int arr[], int size);

int main()
{

	int arr[8]; 
	printf("Enter array elements: ");
	
	for(int i=0; i<8; i++)
	{
		scanf("%d", &arr[i]);
	}

	


	printf("Array after reversing the elements: ");

	array_reversel(arr, 8);

	for(int i=0; i<8; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;

}


int array_reversel(int arr[], int size)
{
	int i = 0;
	int j = size - 1;

	int temp;
	while(i < j)
	{
		temp = arr[i];

		arr[i] = arr[j];
		arr[j] = temp;


		i++;
		j--;


	}

}
