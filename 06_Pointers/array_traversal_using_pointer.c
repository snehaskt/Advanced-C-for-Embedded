#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter the array Elements: ");

    int *ptr = NULL;
    ptr = arr;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

   printf("Array elements: ");

   if(ptr != NULL)
   {
    for(int i=0; i<5; i++)
    printf("%d ", *(ptr + i));
   }

   printf("\n");
    return 0;
}
