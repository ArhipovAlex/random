#include<iostream>
using namespace std;

#define tab "\t";

void main() {
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] <<tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		//Встречалось ли выбранное значение раньше
		bool met_before = false;//предположим что не встречалось
		//проверяем проедположение
		for (int j = 0; j < i; j++) {
			if (arr[j] == arr[i]){
				 met_before = true;
				 break; //прерывает рекурсию, итерацию и все последующие
			}
		}
		if (met_before)continue;//прерывает итерацию и переходит к следующему
		//поиск повторений
		int count = 0;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
		if (count)printf("Значение %d повторяется %d раз\n",arr[i],count);
	}
}