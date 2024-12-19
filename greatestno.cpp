#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "The greatest number is: " << (num1 > num2 ? num1 : (num1 < num2 ? num2 : 0)) << endl;

    return 0;
}