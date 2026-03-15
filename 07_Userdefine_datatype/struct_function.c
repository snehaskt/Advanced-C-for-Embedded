#include <stdio.h>
#include <string.h>


struct student
{
	char name[20];
	int id;
	int marks;
};

void student_nishanth(struct student *s1);
void student_nihal(struct student *s2);


int main()
{
	int option;
	struct student s1, s2;

	printf("Enter the number to choose the student: 1. Nishanth. 2. Nihal:\n");
	scanf("%d", &option);


	if(option == 1)
	{
		student_nishanth(&s1);
		printf("Name:%s\n", s1.name);
		printf("ID:%d\n", s1.id);
		printf("Marks:%d\n", s1.marks);
	}

	else if(option == 2)
	{
		student_nihal(&s2);
		printf("Name:%s\n", s2.name);
		printf("ID:%d\n", s2.id);
		printf("Marks:%d\n", s2.marks);
	}


	else
	{
		printf("Invalid option\n");
	}

	return 0;



}


void student_nishanth(struct student *s1)
{
	strcpy(s1->name, "Nishanth");
	s1->id = 11;
	s1->marks = 25;
}

void student_nihal(struct student *s2)
{
	strcpy(s2->name, "Nihal");
	s2->id = 12;
	s2->marks = 24;

}


