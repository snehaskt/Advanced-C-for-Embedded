#include <stdio.h>
#include <stdint.h>

int main()
{
	int arr[5];

	printf("Enter the array Elements: ");

	for(int i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}

        //declaring the integer pointer and passing the base address
	int *ptr = arr;


	printf("Array forward traversel by pointer arithmetic:\n");

	for(int i=0; i<5; i++)
	{
		printf("%p, %d ", (void *)(ptr+i), *(ptr+i));
	}

	printf("\n");

	printf("Array backward traversal by pointer arithmetic:\n");

	for(int i=4; i>=0; i--)
	{
		printf("%p, %d ", (void *)(ptr+i), *(ptr+i));
	}

	printf("\n");


	//printf("%p, %d\n",(void *)ptr+0, *(ptr+0));
	//printf("%p, %d\n", (void *)ptr+1, *(ptr+1));
	//printf("%p, %d\n", (void *)ptr+2, *(ptr+2));
	//printf("%p, %d\n", (void *)ptr+3, *(ptr+3));
	//printf("%p, %d\n", (void *)ptr+4, *(ptr+4));

	return 0;

}

	
