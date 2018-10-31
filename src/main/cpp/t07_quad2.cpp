//Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если данное уравнение не имеет корней, выведите число 0. Если уравнение имеет один корень, выведите число 1, а затем этот корень. Если уравнение имеет два корня, выведите число 2, а затем два корня в порядке возрастания. Если уравнение имеет бесконечно много корней, выведите число 3.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//2 -1 2

#include "t07_quad2.h"
#include <iostream>
#include <cmath>

using namespace std;

int t07_quad2() {
    double a, b, c, D;
    cin >> a >> b >> c;
    D = pow(b, 2) - 4 * a * c;
    if (a == 0 && b == 0 && c == 0) {
        cout << 3;
    } else if (a == 0 && b == 0) {
	cout << 0;
    } else if (a == 0) {	
        cout << 1 << " " << -c / b;
    } else if (D > 0) {
        cout << 2 << " " << (-b - sqrt(D)) / (2 * a) << " " << (-b + sqrt(D)) / (2 * a);
    } else if (D == 0) {
        cout << 1 << " " << -b / (2 * a);
    } else {
        cout << 0;
    }
};