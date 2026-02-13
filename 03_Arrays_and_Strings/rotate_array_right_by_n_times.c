#include <stdio.h>

int main()
{
	int arr[5];
	int n, temp = 0;
	printf("Enter array elements: ");

	for(int i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the number of times you want to rotate array to left: ");
	scanf("%d", &n);

	n = n % 5;

	if(n < 0)
	{
		printf("Invalid rotation count\n");
		return 0;
	}

	for(int i=0; i<n; i++)
	{
		temp = arr[5-1];
		for(int j=5-1; j>0; j--)
		{
			arr[j] = arr[j-1];
		}
		arr[0] = temp;


	}

	printf("After rotating the array to left by n times this is the array element formate: ");

	for(int k=0; k<5; k++)
	{
		printf("%d ", arr[k]);
	}

	printf("\n");

	return 0;

}



