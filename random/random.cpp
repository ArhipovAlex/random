#include <iostream>
#include <time.h>
using namespace std;

#define tab "\t"

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    const int n = 5;
    int arr[n];
    int minRand, maxRand;        
    cout << "Введите минимально и максимально возможные числа "; cin >> minRand>>maxRand;
    /*do {
        cout << "Введите минимально возможное число "; cin >> minRand;
        cout << "Введите максимально возможное число "; cin >> maxRand;
        if (maxRand <= minRand) {
            cout << "ERROR: Нулевой диапазон" << endl;   
            system("PAUSE");
            system("CLS");
        }
    } while (maxRand == minRand);*/
    if (maxRand < minRand) {
        int buff = minRand;
        minRand = maxRand;
        maxRand = buff;
    }
    if (maxRand - minRand<10) {
        maxRand = minRand+10;
    }

    for (int i = 0; i < n; i++) {
        arr[i]=0;
    }

    int k = 0;
    int ch=0;
    bool notuniq = false;
    do {        
        ch = rand() % (maxRand-minRand) + minRand;
        notuniq = false;
        for (int j = 0; j < n; j++) {
        if (arr[j] = ch) {
            notuniq = true;
        }
        }
        if (notuniq=false) { 
            arr[k] = ch; 
            k++; 
        }
    } while (k < n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << tab;

    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            //arr[i] - выбранный элемент
            //arr[j] - перебираемый элемент
            if (arr[j] < arr[i]) {
                int buff = arr[j];
                arr[j] = arr[i];
                arr[i] = buff;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << tab;

    }
    cout << endl;
}
