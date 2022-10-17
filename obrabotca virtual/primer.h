#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class person {
	int a;
	int b;

public:
	person() {
		a = 0;
		b = 0;
	}

	void Example() {
		Random();
		int answer;
		cout << "example:" << a << " + " << b << endl;
		cin >> answer;
		cin.ignore();
		if (answer != a + b) {
			throw "Rong!";
		}
		cout << "Better!" << endl;
	}

	void Random() {
		srand(time(0));
		a = rand() % 150;
		b = rand() % 200;
	}

};