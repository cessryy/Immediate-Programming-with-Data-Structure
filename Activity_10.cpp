#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        int age;
        string course;
        string block;
        string year;
        
        Student(string getName, int getAge, string getCourse, string getBlock, string getYear) {
            name = getName;
            course = getCourse;
            block = getBlock;
            year = getYear;
            age = getAge;
        }
};

int main() {
    Student pupil1("Jeza Marie Betchayda", 20, "BSIT", "Block-B", "1st Year");
    Student pupil2("Princess Sarry Icatlo", 18, "BSIT", "Block-B", "1st Year");
    Student pupil3("Alexxa Kimjoy Balane", 18, "BSIT", "Block-B", "1st Year");
    Student pupil4("Joshua De Guzman", 19, "BSIT", "Block-B", "1st Year");
    Student pupil5("Razel Ken Rafa", 18, "BSIT", "Block-B", "1st Year");
    
    cout << "Information of Student 1: \n";
    cout << "Name: " << pupil1.name << " | Age: " << pupil1.age << " | Course: " << pupil1.course 
         << " | Block: " << pupil1.block << " | Year: " << pupil1.year << endl;
    cout << endl;
    cout << "Information of Student 2: \n";
    cout << "Name: " << pupil2.name << " | Age: " << pupil2.age << " | Course: " << pupil2.course 
         << " | Block: " << pupil2.block << " | Year: " << pupil2.year << endl;
    cout << endl;
    cout << "Information of Student 3: \n";
    cout << "Name: " << pupil3.name << " | Age: " << pupil3.age << " | Course: " << pupil3.course 
         << " | Block: " << pupil3.block << " | Year: " << pupil3.year << endl;
    cout << endl;
    cout << "Information of Student 4: \n";
    cout << "Name: " << pupil4.name << " | Age: " << pupil4.age << " | Course: " << pupil4.course 
         << " | Block: " << pupil4.block << " | Year: " << pupil4.year << endl;
    cout << endl;
    cout << "Information of Student 5: \n";
    cout << "Name: " << pupil5.name << " | Age: " << pupil5.age << " | Course: " << pupil5.course 
         << " | Block: " << pupil5.block << " | Year: " << pupil5.year << endl;
    
    return 0;
}

