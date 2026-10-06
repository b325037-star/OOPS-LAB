
#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNo;
    float balance;

public:
    BankAccount(int a, float b) {
        accountNo = a;
        balance = b;
    }
};

class SavingsAccount : public BankAccount {
    float interestRate;

public:
    SavingsAccount(int a, float b, float r)
        : BankAccount(a, b) {
        interestRate = r;
    }

    void display() {
        float interest = balance * interestRate / 100;
        balance = balance + interest;

        cout << "Savings Account" << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
    float minBalance;
    float charge;

public:
    CurrentAccount(int a, float b, float m, float c)
        : BankAccount(a, b) {
        minBalance = m;
        charge = c;
    }

    void display() {
        if (balance < minBalance)
            balance = balance - charge;

        cout << "Current Account" << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount s(101, 10000, 5);
    CurrentAccount c(102, 4000, 5000, 200);

    s.display();
    cout << endl;
    c.display();

    return 0;
}