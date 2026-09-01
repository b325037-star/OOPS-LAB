
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float cgpa;
};

int main() {
    struct Student s;

    printf("Enter Roll, Name, Age, CGPA: ");
    scanf("%d %s %d %f", &s.roll, s.name, &s.age, &s.cgpa);

    printf("\nRoll: %d\nName: %s\nAge: %d\nCGPA: %.2f",
           s.roll, s.name, s.age, s.cgpa);

    return 0;
}