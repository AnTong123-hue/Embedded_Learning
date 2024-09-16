#include <iostream>

using namespace std;

class Student {
private: 
    string name;
    char gender;
public:
    Student()
    {
        this->name = "Unknown";
        this->gender = ' ';
    }    
    Student(string name)
    {
        this->name = name;
        this->gender = ' ';
    }
    Student(char gender)
    {
        this->name = "Unknown";
        this->gender = gender;
    }
    Student(string name, char gender)
    {
        this->name = name;
        this->gender = gender;
    }
    void display()
    {
        cout << "Name: " << this->name << endl;
        if (this->gender == 'm')
        {
        cout << "Gender: male" << endl;
        } else if (this->gender == 'f')
        {
            cout << "Gender: female" << endl;
        } else 
        {
            cout << "Gender: Unknown" << endl;
        }

    }
};

int main() {
	Student s1;
	s1.display();
	Student s2("Quang");
	s2.display();
	Student s3('m');
	s3.display();
	Student s4("Thu", 'f');
	s4.display();
	return 0;
}