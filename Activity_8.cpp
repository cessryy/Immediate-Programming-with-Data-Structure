#include <iostream>

using namespace std;

int add (int num1, int num2);
double add (double num1, double num2);

int subtract (int num1, int num2);
double subtract (double num1, double num2);

int multiply (int num1, int num2);
double multiply (double num1, double num2);

int divide (int num1, int num2);
double divide (double num1, double num2);

int main() {
    cout << "Addition" << endl;
    cout << add(5, 5) << endl;
    cout << add(3.8, 2.6) << endl;
    cout << "\nSubtraction" << endl;
    cout << subtract(5, 5) << endl;
    cout << subtract(3.8, 7.3) << endl;
    cout << "\nMultiplication" << endl;
    cout << multiply(5, 5) << endl;
    cout << multiply(3.8, 2.6) << endl;
    cout << "\nDivision" << endl;
    cout << divide(5, 5) << endl;
    cout << divide(2.6, 3.5) << endl;
    return 0;
}
// add
int add(int num1, int num2) {
    return num1 + num2;
}

double add(double num1, double num2) {
    return num1 + num2;
}
//subtract

int subtract(int num1, int num2) {
    return num1 - num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}
//multiply
int multiply(int num1, int num2) {
    return num1 * num2;
}

double multiply(double num1, double num2) {
    return num1 * num2; 
}
//divide
int divide(int num1, int num2) {
    return num1 / num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}
