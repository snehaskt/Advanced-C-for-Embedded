#include <stdio.h>
#include <string.h>


struct student
{
	char name[20];
	int id;
	int marks;
};

struct student student_data(int option);


int main()
{
	int option;
	struct student s;

	printf("Enter the number to choose the student: 1. Nishanth. 2. Nihal:\n");
	scanf("%d", &option);


	if(option == 1 || option == 2)
	{
		s = student_data(option);


                printf("Name:%s\n", s.name);
                printf("ID:%d\n", s.id);
                printf("Marks:%d\n", s.marks);
        }


	else
	{
		printf("Invalid option\n");
	}

	return 0;

}


struct student student_data(int option)
{
	struct student s;


	if(option == 1)
	{
	strcpy(s.name, "Nishanth");
	s.id = 11;
	s.marks = 25;


	}

	if(option == 2)
	{
	strcpy(s.name, "Nihal");
        s.id = 12;
        s.marks = 24;

	}


	return s;

}




