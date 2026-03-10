#include <stdio.h>
#include <string.h>

struct employe
{
    int id;
    char name[20];
    float salary;

};

int main()
{
    struct employe e1;
    struct employe e2;

    int x = 0;
    int id = 0;
   
    printf("Enter the Employee ID: ");
    scanf("%d", &id);

    strcpy(e1.name, "snehas");
    strcpy(e2.name, "vaishnavi");

    e1.salary = 25650;    
    e2.salary = 25650;

    if(id == 96)
    {
        e1.id = id;
        x = e1.id;
    }

    else if(id == 95)
    {
        e2.id = id;
        x = e2.id;

    }

    switch (x)
    {
        case 96:
        printf("Employe name:%s\n", e1.name);
        printf("Employe salary:%.2f\n", e1.salary);
        break;

        case 95:
        printf("Employe name:%s\n", e2.name);
        printf("Employe salary:%.2f\n", e2.salary);
        break;

        default:
        printf("Enterd wrong Employe ID\n");

    }

    return 0;

}
