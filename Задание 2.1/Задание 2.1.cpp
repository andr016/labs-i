#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0, "");
	cout << "Задание 2.1" << endl;

	double M, N, L, y1, y2, Z;
	cout << "Введите переменную M: "; cin >> M;
	cout << "Введите переменную N: "; cin >> N;
	cout << "Введите переменную L: "; cin >> L;
	if (L > 7 && L < 10) {
		y1 = M + 5 * N;
		y2 = 2 * M + 5 * N;
	}
	else {
		y1 = L + 0.5 * N;
		y2 = N + 0.7 * L;
	}
	cout << "y1=" << y1 << endl << "y2=" << y2 << endl;
	if (y1 > y2) {
		Z = y2 * y2 - sqrt(abs(y1));
	}
	else {
		Z = y1 * y1 - sqrt(abs(y2));
	}
	cout << "Z=" << Z << endl;
}


