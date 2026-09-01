
#include <iostream>
using namespace std;

class Calculator
{
    private:
        float num1;
        float num2;

    public:
        void input()
        {
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
        }

        void add()
        {
            cout<<"Sum: "<<num1 + num2<<endl;
        }

        void subtract()
        {
            cout<<"Difference: "<<num1 - num2<<endl;
        }

        void multiply()
        {
            cout<<"Product: "<<num1 * num2<<endl;
        }

        void divide()
        {
            if(num2 != 0)
                cout<<"Division: "<<num1 / num2<<endl;
            else
            {
                cout<<"Error: Division by zero!"<<endl;
            
            }
        }
};

int main()
{
    Calculator calc;
    calc.input();
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();
    return 0;
}