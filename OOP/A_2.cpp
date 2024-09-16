#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        int age;
        
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age;
        }

        void getInformation()
        {
            cin >> name >>age;
        }
};

int main()
{
    Student s;
    s.getInformation();
    s.display();
    return 0;
}