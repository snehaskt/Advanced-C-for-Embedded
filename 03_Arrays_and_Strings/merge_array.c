#include <stdio.h>

int main()
{

	int arr1[5];
	int arr2[5];

	int arr[10] = {0};

	int temp = 0;
	int i = 0, j = 0, k = 0;
	//size = ((sizeof(arr1) / sizeof(arr1[0])) + (sizeof(arr2) / sizeof(arr2[0])));

	printf("Enter the first array: ");

	for(int i=0; i<5; i++)
	{
		scanf("%d", &arr1[i]);
	}

	printf("Enter the second array: ");

	for(int j=0; j<5; j++)
	{
		scanf("%d", &arr2[j]);
	}

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(arr1[i] < arr1[j])
			{
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}

		}

	}

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(arr2[i] < arr2[j])
			{
				temp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = temp;
			}

		}

	}


	printf("first sorted array: ");
	for(int i=0; i<5; i++)
	{
		printf("%d ", arr1[i]);
	}

	printf("\n");

	printf("second sorted array: ");

	for(int i=0; i<5; i++)
	{
		printf("%d ", arr2[i]);
	}

	printf("\n");



	printf("After merging two sorted array: ");

	while(i < 5 && j < 5)
	{
		if(arr1[i] < arr2[j])
			arr[k++] = arr1[i++];
		else
			arr[k++] = arr2[j++];
	}

	while(i < 5)
		arr[k++] = arr1[i++];

	while(j < 5)
		arr[k++] = arr2[j++];



	for(int i=0; i<k; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}




