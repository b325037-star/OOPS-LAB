
#include <iostream>
using namespace std;

class Student {
string name;
int marks;
public:
    Student(string n, int m ) {
        name = n;
        marks = m;
    }

    bool operator>(Student s) {
        return marks > s.marks;
    }

    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};
int main()
{
    
    Student s1("Alice", 85);
    Student s2("Bob", 90);

    bool s3 = s1 > s2;

    cout << "Student with higher marks: ";
    if (s3) {
        s1.display();
    } else {
        s2.display();
    }

    return 0;
}