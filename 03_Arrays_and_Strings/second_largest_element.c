#include <stdio.h>

int main()
{
	int arr[10];

	int first_largest, second_largest;
	printf("Enter array elements: ");

	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}


	if(arr[0] > arr[1])
	{
		first_largest = arr[0];
		second_largest = arr[1];
	}
	else
	{
		first_largest = arr[1];
		second_largest = arr[0];
	}




	for(int i = 2; i < 10; i++)
	{
		if(arr[i] > first_largest)
		{
			second_largest = first_largest;
			first_largest = arr[i];
		}
		else if(arr[i] > second_largest && arr[i] != first_largest)
		{
			second_largest = arr[i];
		}
	}

	printf("The second largest element in the array is:%d\n", second_largest);


	return 0;
}





