#include <stdio.h>

//funtion declaration
int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int my_div(int n1, int n2);


int main()
{
	int n1, n2;
	int choice;
	int result;


	printf("Enter any two integer: ");
	scanf("%d %d", &n1, &n2);

	//Asking the user to choose the operation to do
	printf("\nEnter the operation: \n");
	printf("0.Addition:\n");
	printf("1.Subtraction:\n");
	printf("2.Multiplication:\n");
	printf("3.Division:\n");

	//asking to chosse any one operation
	printf("Enter the choice:\n");
	scanf("%d", &choice);

	//funtion pointer initializing with NULL
        int (*operation[4])(int,int) = {add,sub,mul,my_div};

	if(choice >= 0 && choice < 4)
	{
		result = operation[choice](n1, n2);
	}

	printf("Result is %d\n", result);

	return 0;
}


//addition function
int add(int n1, int n2)
{
	 return n1+n2;
}

//sutraction function
int sub(int n1, int n2)
{
	return n1-n2;
}

//multiplication function
int mul(int n1, int n2)
{
	return n1*n2;
}

//division function
int my_div(int n1, int n2)
{
	if(n2 == 0)
	{
		printf("Invalid input\n");
		return 0;
	}

	return n2/n1;

}


