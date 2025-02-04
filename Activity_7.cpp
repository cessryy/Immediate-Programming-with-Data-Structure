#include <iostream>
#include <string>

using namespace std;

struct StudentInfo {
    string name = "";
    int age = 0;
    string course = "";
    int year = 0;
    string block = "";
    string gender = "";
};

void inputInformation(StudentInfo &student);  
void displayStudentInfo(StudentInfo student);

int main() {
    StudentInfo student1, student2, student3, student4, student5;

    cout << "Enter details for Student 1:\n";
    inputInformation(student1);
    displayStudentInfo(student1); 
    
    cout << "\nEnter details for Student 2:\n";
    inputInformation(student2);
    displayStudentInfo(student2); 
    
    cout << "\nEnter details for Student 3:\n";
    inputInformation(student3);
    displayStudentInfo(student3); 
    
    cout << "\nEnter details for Student 4:\n";
    inputInformation(student4);
    displayStudentInfo(student4); 
    
    cout << "\nEnter details for Student 5:\n";
    inputInformation(student5);
    displayStudentInfo(student5); 

    return 0;
}

void inputInformation(StudentInfo &student) {
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

void displayStudentInfo(StudentInfo student) {
    cout << "\nStudent Information:\n";
    cout << student.name << " is a " << student.age << "-year-old " << student.gender << " taking " << student.course << ", currently in year " << student.year << ", block " << student.block << ".\n";
}
