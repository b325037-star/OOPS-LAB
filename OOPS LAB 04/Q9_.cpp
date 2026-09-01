
#include <iostream>
using namespace std;

class Exam
{
private:
    string studentName;
    string subject;
    float marks;
    float maximumMarks;

public:
    void input()
    {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Marks: ";
        cin >> marks;

        cout << "Enter Maximum Marks: ";
        cin >> maximumMarks;
    }

    friend class Result;
};

class Result
{
public:
    void displayResult(Exam e)
    {
        float percentage;

        percentage = (e.marks / e.maximumMarks) * 100;

        cout << "\nStudent Name: " << e.studentName << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << endl;
        cout << "Maximum Marks: " << e.maximumMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if(percentage >= 40)
            cout << "Result: Pass" ;
        else
            cout << "Result: Fail" ;
    }
};

int main()
{
    Exam e;
    Result r;

    e.input();
    r.displayResult(e);

    return 0;
}