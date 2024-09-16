#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Student{
    private:
    string name;
    double math;
    double physic;
    double chemistry;
    public:
    Student(){};
    Student(string name, double math, double physic, double chemistry)
    {
        this->name = name; this->math = math; this->physic = physic; this->chemistry = chemistry;
    }
    double getMath(){
        return this->math;
    }
    double getPhysic(){
        return this->physic;
    }
    double getChemistry(){
        return this->chemistry;
    }
    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Point math: " << this->math << endl;
        cout << "Point physic: " << this->physic << endl;
        cout << "Point chemistry: " << this->chemistry << endl;
        cout << "Aerage: " << avgPoint() << endl;
    }
    double avgPoint()
    {
        return (getMath() + getPhysic() + getChemistry()) / 3;
    }
    static vector<Student> getStudentMaxAvg(vector<Student> vt)
    {
        vector<Student> studentMaxAvg;
        //Find max in vector first
        double maxAvg = vt[0].avgPoint();
        for (int i = 0; i < vt.size(); i++)
        {
            if (maxAvg < vt[i].avgPoint())
            {
                maxAvg = vt[i].avgPoint();
            }
        }
        // Create new vector with maxAvg Students
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i].avgPoint() == maxAvg)
            {
                studentMaxAvg.push_back(vt[i]);
            }
        }
        return studentMaxAvg;
    }
    static vector<Student> getStudentMaxMath(vector<Student> vt)
    {
        vector<Student> studentMaxMath;
        //Find max in vector first
        double maxMath = vt[0].getMath();
        for (int i = 0; i < vt.size(); i++)
        {
            if (maxMath < vt[i].getMath())
            {
                maxMath = vt[i].getMath();
            }
        }
        // Create new vector with maxMath Students
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i].getMath() == maxMath)
            {
                studentMaxMath.push_back(vt[i]);
            }
        }
        return studentMaxMath;
    }
    static vector<Student> getStudentMaxPhysic(vector<Student> vt)
    {
        vector<Student> studentMaxPhysic;
        //Find max in vector first
        double maxPhysic = vt[0].getPhysic();
        for (int i = 0; i < vt.size(); i++)
        {
            if (maxPhysic < vt[i].getPhysic())
            {
                maxPhysic = vt[i].getPhysic();
            }
        }
        // Create new vector with maxPhysic Students
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i].getPhysic() == maxPhysic)
            {
                studentMaxPhysic.push_back(vt[i]);
            }
        }
        return studentMaxPhysic;
    }
    static vector<Student> getStudentMaxChemistry(vector<Student> vt)
    {
        vector<Student> studentMaxChemistry;
        //Find max in vector first
        double maxChemistry = vt[0].getChemistry();
        for (int i = 0; i < vt.size(); i++)
        {
            if (maxChemistry < vt[i].getChemistry())
            {
                maxChemistry = vt[i].getChemistry();
            }
        }
        // Create new vector with maxChemistry Students
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i].getChemistry() == maxChemistry)
            {
                studentMaxChemistry.push_back(vt[i]);
            }
        }
        return studentMaxChemistry;
    }    
};