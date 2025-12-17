#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main() {

    // struct = A custom container that holds multiple
    //          pieces of related information.
    //          Similar to Objects in other languages.

    Student student1 = {"\nGiovanni", 24, 30.0, true};
    Student student2 = {"Jesus", 999999999, 666.99, false};
    Student student3 = {0};
    strcpy(student3.name, "Satan");
    student3.age = 666999;
    student3.gpa = 666.999;
    student3.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);

    return 0;
}

void printStudent(Student student){
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFullTime) ? "Yes\n" : "No\n");
}