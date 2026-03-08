#include <stdio.h>

int remove_duplicate(int arr[], int size);

int main()
{
	int arr[10];
	int temp = 0;

	int size = 10;
	printf("Enter the array: ");

	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			if(arr[i] <= arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}

	}

	printf("Sorted array: ");
	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("Sorted array after removing the duplicates: ");

	/*for(int i=0; i<size; i++)
	  {
	  for(int j=i+1; j<size; j++)
	  {
	  if(arr[i] == arr[j])
	  {
	  arr[j] = 0;
	  size--;
	  for(int k=j; k<size; k++)
	  {
	  arr[k] = arr[k+1];
	  }

	  }

	  }


	  }*/

	int new_size = remove_duplicate(arr, 10);

	for(int i=0; i<new_size; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");



	return 0;
}


int remove_duplicate(int arr[], int size)
{

	int j = 0;

	for(int i=0; i<size; i++)
	{
		if(arr[i] != arr[j])
		{
			j++;
			arr[j] = arr[i];
		}



	}


	return j+1;
}




