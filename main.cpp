
#include <iostream>
#include ".h/printID.h"

using namespace std;

int main() {

    int n = 1;
    int i = 1;
    double tax;
    double income;
    double sumtax = 0;
    printID();

    while (n == 1) {
        cout << i << "员工的收入：";
        cin >> income;

        if (income < 0) {
            cout << "该公司一共有： " << i - 1 << "人" << endl;
            cout << "总缴税额： " << sumtax << "元" << endl;
            exit(1);
        } else if (income <= 3500) {
            tax = 0;
        } else if (income <= 5000) {
            tax = (income - 3500) * 0.03;
        } else if (income <= 8000) {
            tax = 1500 * 0.03 + (income - 5000) * 0.1;
        } else if (income > 8000) {
            tax = 1500 * 0.03 + 3000 * 0.1 + (income - 8000) * 0.1;
        }
        cout << "该员工应缴税： " << tax << "元" << endl;
        i = i + 1;
        sumtax += tax;
    }
    return 0;
}