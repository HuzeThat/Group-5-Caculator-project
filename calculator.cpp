#include<iostream>
using namespace std;
int subtract(int a, int b);
int divide(int a, int b);
int addition(int a,int b);
int multiply(int a, int b);

int main() {
    int num1, num2;
 char operation;
 cout << "Enter two numbers: ";
 cin >> num1 >> num2;
 cout << "Choose operation (+, -, *, /): ";
 cin >> operation;
 switch (operation) {
 case '+':
 cout << "Result: " << addition(num1, num2) << endl;
 break;
 case '-':
 cout << "Result: " << subtract(num1, num2) << endl;
 break;
 case '*':
 cout << "Result: " << multiply(num1, num2) << endl;
 break;
 case '/':
 cout << "Result: " << divide(num1, num2) << endl;
 break;
 default:
 cout << "Invalid operation!" << endl;
 }

    return 0;
}

int addition(int a,int b) {
    return a+b;
}
int subtract(int a, int b) {
    return a - b;
}
// this is done by hunde 
int divide(int a, int b) {
    if (b == 0) {
    cout << "Error: Division by zero!" << endl;
    return 0;
    }
    return a / b;
}
int multiply(int a, int b) {
    return a * b;
   }
