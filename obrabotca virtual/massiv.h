#pragma once
#include <iostream>
using namespace std;

class massiv {
	int size;
	int* arr;

public:
	massiv() {
		size = 0;
		arr = 0;
	}
	massiv(const int s) : arr(nullptr), size(0) {
		if (s <= 0) {
			throw s;
		}
		arr = new int[s];
		for (int i = 0; i < s; i++) {
			arr[i] = i;
		}
		size = s;
	}
	~massiv() {
		delete[] arr;
	}
	int GetElem(const int index) {
		if (index < 0 || index >= size) {
			throw "rong index!\n";
		}
		return arr[index];
	}

};