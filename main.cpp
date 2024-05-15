#include <iostream>

using namespace std;

void task_1() { int num;
    cout << "Enter a number: "; cin >> num;
    (num % 2 == 0) ? cout << "Even" : cout << "Odd";}
void task_2() {
    int num1, num2; cout << "Enter first number: ";
    cin >> num1; cout << "Enter seccond number: ";
    cin >> num2; (num1 > num2) ? cout << num2 : cout << num1;
}
void task_3() { int number;
    cout << "Enter a number: "; cin >> number;
    if (number > 0) {  cout << "number > 0" << endl;
    } else if (number == 0) {
        cout << "number = 0" << endl; }
    else {  cout << "number < 0" << endl;
    }}
void task_4() {
    int a, b; cout << "Enter first number: ";
    cin >> a; cout << "Enter seccond number: ";
    cin >> b; if (a == b) {
        cout << "a = b" << endl; }
    else {  (a > b) ? cout << b << " " << a : cout << a << " " << b;
    }
}

int main() {
    task_1();
    system("pause");
    task_2();
    system("pause");
    task_3();
    system("pause");
    task_4();
    system("pause");

    return 0;
}