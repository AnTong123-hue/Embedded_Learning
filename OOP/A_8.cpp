#include<iostream>

using namespace std;

class Array {
public:
	int* arr;
	int n;
	~Array() {
		cout << "Destructor called" << endl;
		delete[] arr;
	}
};

int main() {
	cout << "before block" << endl;
		Array a;
	cout << "after block" << endl;
	return 0;
}