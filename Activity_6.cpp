#include <iostream>

using namespace std;

void printArray(int numbers[10]);
void printEvenNumbers(int numbers[10]);

int main() {
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    printArray(numbers);
    printEvenNumbers(numbers);
    return 0;
}

void printArray(int numbers[10]) {
    cout << "Numbers in reverse order: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void printEvenNumbers(int numbers[10]) {
    cout << "Even numbers: ";
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
}

