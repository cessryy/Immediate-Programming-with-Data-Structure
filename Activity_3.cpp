#include <iostream>

using namespace std;

int main() {
    int numbers[10];
    int evenNumbers[10];
    
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < sizeof (numbers)/ sizeof (int); i++) {
        cin >> numbers[i];
    }
    cout << "All even numbers in your input: ";
    for (int i = 0; i < sizeof (numbers)/ sizeof (int); i++) {
        if (numbers[i] % 2 != 0) {
            evenNumbers[i] = numbers[i];
            cout << evenNumbers[i] << "  ";
        }
    }
    return 0;
}

