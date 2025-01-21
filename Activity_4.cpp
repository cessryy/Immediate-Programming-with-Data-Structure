#include <iostream>

using namespace std;

int main() {
	
	struct {
		string name = " ";
		int age =0;
		string course = "";
		int year = 0;
		string block = " ";
		string gender = " ";
	} student1, student2, student3, student4, student5;
	
	//student 1
	student1.name = "Princess Sarry Icatlo";
	student1.age = 18;
	student1.course = "BSIT";
	student1.year = 1;
	student1.block = "Block-B";
	student1.gender = "Female";
	
	cout << "Student 1" << '\n';
	cout << "  Name: " << student1.name << '\n';
	cout << "  Age: " << student1.age << '\n';
	cout << "  Course: " << student1.course << '\n';
	cout << "  Year Level: " << student1.year << '\n';
	cout << "  Block: " << student1.block << '\n';
	cout << "  Gender: " << student1.gender << '\n';
	cout << endl;
	
	//student 2
	student2.name = "Jeza MarieBetchayda";
	student2.age = 20;
	student2.course = "BSIT";
	student2.year = 1;
	student2.block = "Block-B";
	student2.gender = "Female";
	
		cout << "Student 2" << '\n';
	cout << "  Name: " << student2.name << '\n';
	cout << "  Age: " << student2.age << '\n';
	cout << "  Course: " << student2.course << '\n';
	cout << "  Year Level: " << student2.year << '\n';
	cout << "  Block: " << student2.block << '\n';
	cout << "  Gender: " << student2.gender << '\n';
	cout << endl;
	
	//student 3
	student3.name = "Alexxa Kimjoy balane";
	student3.age = 18;
	student3.course = "BSIT";
	student3.year = 1;
	student3.block = "Block-B";
	student3.gender = "Female";
	
	cout << "Student 3" << '\n';
	cout << "  Name: " << student3.name << '\n';
	cout << "  Age: " << student3.age << '\n';
	cout << "  Course: " << student3.course << '\n';
	cout << "  Year Level: " << student3.year << '\n';
	cout<< "  Block: "  << student3.block << '\n';
	cout << "  Gender: " << student3.gender << '\n';
	cout << endl;
	
	//student 4
	student4.name = "King Nelson Lianto";
	student4.age = 20;
	student4.course = "BSIT";
	student4.year = 1;
	student4.block = "Block-A";
	student4.gender = "Male";
	
	cout << "Student 4" << '\n';
	cout << "  Name: " << student4.name << '\n';
	cout << "  Age: " << student4.age << '\n';
	cout << "  Course: " << student4.course << '\n';
	cout << "  Year Level: " << student4.year << '\n';
	cout << "  Block: " << student4.block << '\n';
	cout << "  Gender: " << student4.gender << '\n';
	cout << endl;
	
	//student 5
	student5.name = "Francine Pandeagua";
	student5.age = 19;
	student5.course = "BS Legal Management";
	student5.year = 1;
	student5.block = "Block-A";
	student5.gender = "Female";
	
	cout << "Student 5" << '\n';
	cout << "  Name: " << student5.name << '\n';
	cout << "  Age: " << student5.age << '\n';
	cout << "  Course: " << student5.course << '\n';
	cout << "  Year Level: " << student5.year << '\n';
	cout << "  Block: " << student5.block << '\n';
	cout << "  Gender: " << student5.gender << '\n';
	cout << endl;
	
	return 0;
}

