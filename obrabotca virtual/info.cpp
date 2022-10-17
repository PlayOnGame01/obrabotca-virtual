#include <iostream>
#include "primer.h"
#include "massiv.h"

using namespace std;

void Check() {
	int age;
	try {
		cout << "Enter your age: ";
		cin >> age;
		if (age < 18) {
			throw "Error!";
		}
		cout << "You are welcome!" << endl;
	}
	catch (const char* str) {
		cout << "You are under 10!\n";
	}
}

int main() {
	try {
		person obj1;
		obj1.Example();
		cout << "\n";
		int size;
		cout << "Enter size: ";
		cin >> size;
		massiv obj(size);
		int index;
		cout << "Enter index: ";
		cin >> index;
		cout << obj.GetElem(index);
		cout << "\n";

		Check();
	}
	catch (const char* str) {
		cout << "rong answer!" << endl;
	}
	catch (int s) {
		cout << "bad!" << endl;
	}
}