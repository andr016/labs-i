#include <iostream>
#include <math.h>
#include <iomanip>
#include <conio.h>
using namespace std;
int main() {
	int i, N, kt;
	double k, a, X1, dX, X, Y;
	setlocale(0, "");
	cout << "Задание 3.1" << endl;
	do {
		cout << "Введите значение A (A > 0): ";
		cin >> a;
		if (a <= 0)
			cout << "Введено некорректное значение a" << endl;
	} while (a <= 0);
	do {
		cout << "Введите целое, положительное количество точек (N) (N > 1): ";
		cin >> N;
		if (N <= 1)
		{
			cout << "Введено некорректное значение N" << endl;
		}
	} while (N <= 1);
	X1 = -2 * a;
	cout << "a = " << a << "\nN = " << N << "\nX1 = " << X1 << endl;
	do {
		cout << "Введите значение k (k*a > " << X1 / a << "): ";
		cin >> k;
		if (k * a <= X1)
		{
			cout << "Введено неверное значение параметра k" << "\n";
		}
	} while (k * a <= X1);
	dX = a / 4;
	X = X1;
	cout << "N" << setw(12) << "X" << setw(12) << "Y" << setw(1) << endl;
	for (kt = 1; kt < 32; kt++) {
		cout << ("-");
	}
	cout << endl;
	for (i = 0; i < N; i++) {
		if (X <= k * a) { //1
			Y = 2 * a - (a / (2 * (exp(X / a) + exp(-(X / a)))));
		}
		else { //2
			Y = a + sqrt((pow(X, 3)) / (abs(2 * a - X)));
		}
		cout << setw(12) << left << i + 1;
		cout << setw(12) << left << floor(X * 1000 + 0.5) / 1000 << right << setw(10);
		cout << left << floor(Y * 1000 + 0.5) / 1000 << endl;
		X = X + dX;
	}
	return 0;
}