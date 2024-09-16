#include <iostream>

using namespace std;

class Rectangle
{
    private: 
        double length;
        double width;

    public:
        void getInformation()
        {
            cin >> length;
            cin >> width;
        }

        void display()
        {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
        } 

        void getArea()
        {
            cout << "Area: " << length * width << endl;
        }

        void getPerimeter()
        {
            cout << "Perimeter: " << 2 * (length + width) << endl;
        }

};

int main() {
    Rectangle rec;
    rec.getInformation();
    rec.getArea();
    rec.getPerimeter();
    return 0; 
}