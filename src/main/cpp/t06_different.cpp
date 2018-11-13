//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
    int n, i, temp;
    int counter = 1;
    int*Arr;
    cin >> n;
    Arr = new int[n];
    for (i = 0; i < n; i++) {
        cin >> Arr[i];
    }
    temp = Arr[0];
    for (i = 1; i < n; i++) {
        if (temp != Arr[i]) {
	    counter++;
	}
	temp = Arr[i];
    }
    cout << counter;
}