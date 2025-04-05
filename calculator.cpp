#include<iostream>
using namespace std;
int subtract(int a, int b);
int divide(int a, int b);
int main() {



    return 0;
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