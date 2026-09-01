
#include <stdio.h>

struct Date {
    int day,month,year;
};

struct Student {
    int roll;
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;

    printf("Enter Roll Name Day Month Year: ");
    scanf("%d %s %d %d %d",
          &s.roll,s.name,
          &s.dob.day,&s.dob.month,&s.dob.year);

    printf("\nRoll: %d",s.roll);
    printf("\nName: %s",s.name);
    printf("\nDOB: %02d/%02d/%04d",
           s.dob.day,s.dob.month,s.dob.year);

    return 0;
}