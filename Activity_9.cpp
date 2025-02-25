#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int x;

    cout << "Enter 10 numbers:\n";

    for (int i = 0; i < 10; i++) {
        cin >> x;
        numbers.push_back(x);
    }
    
    cout << "The numbers in the vector are:\n";
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}

