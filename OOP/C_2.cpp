#include <iostream>

using namespace std;

class Person
{
    private:
    int id;
    string name;
    int age;
    string address;
    public:
    Person(){}
    Person(int id, string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this-> id = id;
        this->address = address;
    }
    void setId(int id)
    {   
        this->id = id;
    }
    int getId()
    {
        return this->id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    string getAddress()
    {
        return this->address;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }
};

int main()
{
	Person p(1001, "Quynh", 24, "Ha Noi");
	cout << "Id: " << p.getId() << endl;
	cout << "Name: " << p.getName() << endl;
	cout << "Age: " << p.getAge() << endl;
	cout << "Address: " << p.getAddress() << endl;
	return 0;
}