#include <iostream>

using namespace std;

int add(int a, int b) {
	int sum = a + b;
	
	return sum;
}

int min(int a, int b) {
	int diff = a - b;
	
	return diff;
}

int multiply(int a, int b) {
	int product = a * b;
	
	return product;
} 

int divide(int a, int b) {
	int qoutient = a / b;
	
	return qoutient;
}

int modulo(int a, int b) {
	int mod = a % b;
	
	return mod;
}
int main() {
	
	cout << "Addition: " << add(3, 5) << endl;
	cout << "Subtraction: " << min(5, 2) << endl;
	cout << "Multiplication: " << multiply(4, 4) << endl;
	cout << "Division: " << divide(10, 2) << endl;
	cout << "Remainder: " << modulo(20, 3) << endl;
	return 0;
}
