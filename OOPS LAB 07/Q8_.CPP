#include <iostream>
using namespace std;

class Patient {
protected:
    string name;
    int patientID;
    int age;

public:
    Patient(string n, int id, int a) {
        name = n;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient {
    float roomCharges;
    int days;

public:
    InPatient(string n, int id, int a, float charge, int d)
        : Patient(n, id, a) {
        roomCharges = charge;
        days = d;
    }

    void display() {
        float total = roomCharges * days;

        cout << "Patient Name: " << name << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Total Hospital Bill: " << total << endl;
    }
};

int main() {
    InPatient p("Amit", 101, 20, 3000, 5);
    p.display();

    return 0;
}