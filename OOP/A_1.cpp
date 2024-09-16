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
};

int main()
{
    Student s;
    s.name = "Linh";
    s.age = 17;
    s.display();
    return 0;
}