//Выведите все четные элементы массива.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве.
//Sample Input:
//
//7
//1 2 2 3 3 3 4
//Sample Output:
//
//2 2 4

#include "t02_even2.h"
#include <iostream>


using namespace std;

int t02_even2() {
    int n, i;
    int*Arr;
    cin >> n;
    Arr = new int[n];
    for (i = 0; i < n; i++) {
        cin >> Arr[i];
    }
    for (i = 0; i < n; i++) {
        if (Arr[i] % 2 == 0) {
	    cout << Arr[i] << " ";
	}
    }
}