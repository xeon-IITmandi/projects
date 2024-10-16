#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct Student
    {
        /* data */
        char name[50];
        char major[50];
        int age;
        double gpa;
    };


    struct Student student1;
    {
        student1.age=21;
        student1.gpa=4.8;
        //for array do this,
        // use strcpy(instance.array,"value in array");
        strcpy(student1.name,"Jim");
        strcpy(student1.major,"Electrical Engineering");
    };
    struct Student student2;
    {
        student2.age=22;
        student2.gpa=2.8;
        //for array do this,
        // use strcpy(instance.array,"value in array");
        strcpy(student2.name,"maggie");
        strcpy(student2.major,"Business");
    };


    printf("Student1 Details\n\n");
    printf("name: %s\n",student1.name);
    printf("major: %s\n",student1.major);
    printf("age: %i\n",student1.age);
    printf("gpa: %.2lf\n",student1.gpa);

    printf("\nStudent2 Details\n\n");
    printf("name: %s\n",student2.name);
    printf("major: %s\n",student2.major);
    printf("age: %i\n",student2.age);
    printf("gpa: %.2lf\n",student2.gpa);


    


    
    
    return 0;
}
