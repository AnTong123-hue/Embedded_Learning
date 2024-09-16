#include <iostream>
#include <vector>

using namespace std;

class Subject{
    private: 
    string nameSub;
    double point;
    int numberCredit;
    long money;
    public:
    Subject(){};
    Subject(string nameSub, double point, int numberCredit, long money)
    {
        this->nameSub = nameSub;
        this->numberCredit = numberCredit;
        this->point = point;
        this->money = money;
    }
    string getNameSub()
    {
        return this->nameSub;
    }
    double getPoint()
    {
        return this->point;
    }
    int getNumberCredit()
    {
        return this->numberCredit;
    }
    long getMoney()
    {
        return this->money;
    }
    void display()
    {
        cout << "Name Subject: " << this->nameSub << endl;
        cout << "Point: " << this->point << endl;
        cout << "Number Credit: " << this->numberCredit << endl;
        cout << "Money Of One Credit: " << this->money << endl;
    }
};

class Student{
    private:
    string id;
    string name;
    vector<Subject> s;
    public:
    Student();
    Student(string id, string name, vector<Subject> s)
    {
        this->id = id;
        this->name = name;
        this->s = s;
    }
    string getId(){
        return this->id;
    }
    string getName(){
        return this->name;
    }
    vector<Subject> getS()
    {
        return this->s;
    }
    long getSumMoney()
    {
        long sum = 0;
        for (int i = 0; i < this->s.size(); i++)
        {
            sum += this->s.at(i).getMoney() * this->s.at(i).getNumberCredit();
        }
        return sum;
    }
    double avgPoint()
    {
        double sumPoint = 0;
        for (int i = 0; i < this->s.size(); i++)
        {
            sumPoint += this->s.at(i).getPoint();
        }
        return sumPoint/s.size();
    }
    void display()
    {
        cout << "Id: " << this->id << endl;
        cout << "Name Student: " << this->name << endl;
        cout << "List Subject" << endl;
        for (int i = 0; i < this->s.size() ; i++)
        {
            this->s.at(i).display();
        }
        cout << "Sum Money Have To Pay: " << getSumMoney() << endl;
        cout << "Average Point: " << avgPoint() << endl;
    }
};
