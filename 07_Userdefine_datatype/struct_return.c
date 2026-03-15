#include <stdio.h>
#include <string.h>


struct employee
{
	char name[20];
	char designation[20];
	int id;
	float salary;
};

float employee_data(float salary, int option);


int main()
{
	int option;
	struct employee e1, e2, e3, e4;

	printf("Enter the number to choose the Employee: 1.Ram, 2.Bheam, 3.sham, 4.sundhar:\n");
	scanf("%d", &option);

	printf("/******************/\n");
	strcpy(e1.name, "Ram" );
	strcpy(e1.designation, "Firmware Developer");
	e1.id = 1;

 strcpy(e2.name, "Bheam" );
        strcpy(e2.designation, "Hardware Engineer");
        e2.id = 2;

 strcpy(e3.name, "Sham" );
        strcpy(e3.designation, "software Engineer");
        e3.id = 3;

 strcpy(e4.name, "Sundhar" );
        strcpy(e4.designation, "Firmware Developer");
        e4.id = 4;


	if(option == 1)
	{
		printf("Name:%s\n", e1.name);
		printf("Designation:%s\n", e1.designation);
		printf("ID:%d\n", e1.id);
		e1.salary = employee_data(e1.salary, option);
		printf("Salary:%.3f\n", e1.salary);
	}

	else if(option == 2)
	{

		printf("Name:%s\n", e2.name);
		printf("Designation:%s\n", e2.designation);
		printf("ID:%d\n", e2.id);
		e2.salary = employee_data(e2.salary, option);
		printf("Salary:%.3f\n", e2.salary);
	}


	else if(option == 3)
	{
		printf("Name:%s\n", e3.name);
		printf("Designation:%s\n", e3.designation);
		printf("ID:%d\n", e3.id);
		e3.salary = employee_data(e3.salary, option);
		printf("Salary:%.3f\n", e3.salary);
	}

	else if(option == 4)
	{
		printf("Name:%s\n", e4.name);
		printf("Designation:%s\n", e4.designation);
		printf("ID:%d\n", e4.id);
		e4.salary = employee_data(e4.salary, option);
		printf("Salary:%.3f\n", e4.salary);
	}

	else
	{
		printf("Invalid option\n");
	}



	return 0;



}


float employee_data(float salary, int option)
{
	if(option == 1)
	{
		salary = 35000.650;
		return salary;
	}

	if(option == 2)
	{

		salary = 35000.450;
		return salary;
	}

	if(option == 3 )
	{
		salary = 40000.500;
		return salary;
	}

	if(option == 4)
	{
		salary = 50000.600;
		return salary;
	}

	return 0;

}
