#include <stdio.h>
#include <string.h>

 struct student 
{
	char name[10];
	int rool_number;
	float mark;
};

int main()
{
	struct student a;
	strcpy(a.name, "snehas");
	a.rool_number = 71;
	a.mark = 83.20;

	printf("student name is: %s\n", a.name );
	printf("student rool number is: %d\n", a.rool_number);
	printf("student mark is: %.2f\n", a.mark);

	return 0;
}



