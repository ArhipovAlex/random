#include<iostream>
using namespace std;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	int maxRand = 10;
	int minRand = 0;
	for (int i = 0; i < n; i++) {
		bool unique; //флаг уникальности
		do {
			arr[i] = rand() % (maxRand - minRand) + minRand;
			unique = true;
			for (int j = 0; j < i; j++) {
				if (arr[i] == arr[j]) {
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}

	cout << endl;
}