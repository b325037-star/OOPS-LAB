
#include <iostream>
using namespace std;

class BankAccount
{
    private:
        int accountNumber;
        char accountHolderName[50];
        float balance;

    public:
        void input()
        {
            cout<<"Enter Account Number, Account Holder Name and Balance: ";
            cin>>accountNumber>>accountHolderName>>balance;
        }
void deposit()
        {
            float amount;
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            balance += amount;
            cout<<"Amount deposited successfully!"<<endl;
        }
void withdraw()
{
            float amount;
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            if(amount <= balance)
            {
                balance -= amount;
                cout<<"Amount withdrawn successfully!"<<endl;
            }
            else
            {
                cout<<"Insufficient balance!"<<endl;
            }
}

        void display()
        {
            cout<<"\nAccount Number: "<<accountNumber<<"\nAccount Holder Name: "<<accountHolderName<<"\nBalance: "<<balance<<"\n"<<endl;
        }
}; 
int main()
{
    BankAccount b;
    b.input();
    b.deposit();
    b.withdraw();
    b.display();
    return 0;
}