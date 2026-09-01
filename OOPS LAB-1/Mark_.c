
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float c,math,physics;
};

int main() {
    struct Student s;
    float total,avg;

    printf("Enter Roll Name C Math Physics: ");
    scanf("%d %s %f %f %f",
          &s.roll,s.name,&s.c,&s.math,&s.physics);

    total=s.c+s.math+s.physics;
    avg=total/3;

    printf("Total = %.2f\nAverage = %.2f",total,avg);

    return 0;
}