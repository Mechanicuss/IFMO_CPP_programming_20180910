//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
    int n, i, j;
    bool uniq;
    int*Arr;
    cin >> n;
    Arr = new int[n];
    for (i = 0; i < n; i++) {
        cin >> Arr[i];
    }
    for (i = 0; i < n; i++) {
        uniq = true;
	for (j = 0; j < n; j ++) {
	    if ((j != i) & (Arr[j] == Arr[i])) {
	        uniq = false;
	    }
	}
	if (uniq == true) {
	    cout << Arr[i] << " ";
	}
    }
}