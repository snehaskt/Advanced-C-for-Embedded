#include <stdio.h>

void swap(int *p, int *q);
int main()
{
    int a,b;
    printf("Enter the value of variable a & b: ");
   scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("After swapping the variable a & b: %d %d\n", a, b);

    return 0;

}

void swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}
