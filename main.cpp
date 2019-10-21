//2019114465杨靖华
#include <iostream>

using namespace std;

int main() {
    double income = 0;
    double tax = 0;
    double gain = 0;

    cout << "2019114465杨靖华" << endl;
    cout << "Please enter your income" << endl;
    cin >> income;

    if (income < 0) {
        cout << "Please enter correct number!!" << endl;
    }


    if (income <= 3500) {
        cout << "You needn't to pay the tax " << endl;
    } else {
        if (income <= 5000) {
            tax = (income - 3500) * 0.03;
            gain = income - tax;
            cout << "You should pay " << tax << " for your income" << endl;
            cout << "You still have " << gain << " yuan" << endl;
        } else {
            if (income <= 8000) {
                tax = 1500 * 0.03 + (income - 5000) * 0.1;
                gain = income - tax;
                cout << "you should pay " << tax << " for your income" << endl;
                cout << "You still have " << gain << " yuan" << endl;
            } else {
                if (income <= 12500) {
                    tax = 1500 * 0.03 + 3000 * 0.1 + (income - 8000) * 0.2;
                    gain = income - tax;
                    cout << "You should pay " << tax << " for your income" << endl;
                    cout << "You still have " << gain << " yuan" << endl;
                } else {
                    tax = 0;
                    cout << "Now we can't daycalculate (3) your tax!" << endl;
                }
            }
        }
    }
    return 0;
}