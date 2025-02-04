#include <iostream>
#include <string>

using namespace std;

struct occupation {
    string name = "";
    int age = 0;
    string course = "";
    int year = 0;
    string block = "";
    string gender = "";
};

void modifyInformation(Data &student);  
void displayInformation(Data student);

int main() {
    Data student1, student2, student3, student4;

    cout << "Enter details for Student 1:\n";
    modifyInformation(student1);
    displayInformation(student1); 
    
    cout << "\nEnter details for Student 2:\n";
    modifyInformation(student2);
    displayInformation(student2); 
    
    cout << "\nEnter details for Student 3:\n";
    modifyInformation(student3);
    displayInformation(student3); 
    
    cout << "\nEnter details for Student 4:\n";
    modifyInformation(student4);
    displayInformation(student4); 

    return 0;
}

void modifyInformation(occupation &student) {
    cout << "Enter Name\t:\t";
    getline(cin, student.name);

    cout << "Enter Age\t:\t";
    cin >> student.age;
    cin.ignore();

    cout << "Enter Course\t:\t";
    getline(cin, student.course);

    cout << "Enter Year\t:\t";
    cin >> student.year;
    cin.ignore();

    cout << "Enter Block\t:\t";
    getline(cin, student.block);

    cout << "Enter Gender\t:\t";
    getline(cin, student.gender);
}

void displayInformation(occupation student) {
    cout << "\nStudent Information:\n";
    cout << student.name << " is a " << student.age << "-year-old " << student.gender << " taking " << student.course << ", currently in year " << student.year << ", block " << student.block << ".\n";
}

