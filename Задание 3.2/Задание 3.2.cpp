#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	srand(time(NULL));
	setlocale(0, "");
	cout << "Задание 3.2" << endl;
	const int r = 20;
	double E1 = 0, E2 = 0, a[r], C, u[r], sum = 0, ndel = 0;
	const double num = 3.5;
	bool inp = false;
	cout << "Введите 1 для случайного задания чисел: ";
	cin >> inp;
	if (inp == 1) {
		inp = true;
	}
	for (int i = 0; i < size(a); i++) {
		cout << setprecision(3);
		if (inp == true) {
			if (i % 5 == 0)
				cout << endl;
			a[i] = rand() % 10;
			cout << setw(3) << a[i];
		}
		else {
			cout << "a" << i << "=";
			cin >> a[i];
		}
		E1 += a[i];
		E2 += pow(a[i] - num, 2);
	}
	C = E1 / E2;
	cout << endl << "E1= " << E1 << endl << "E2= " << E2 << endl << "C= " << C << endl;
	for (int i = 0; i < size(a); i++) {
		u[i] = a[i] * C;
		if (i % 5 == 0)
			cout << endl;
		cout << setw(8) << u[i];
		sum += u[i];
	}

	sum = sum / r;
	cout << endl << "srt= " << sum << endl;
	for (int i = 0; i < r; i++) {
		if (u[i] < sum)
			ndel++;
	}
	if (ndel >= r / 2) {
		for (int i = 0; i < r; i++) {
			if (u[i] < sum)
				u[i] -= sum;
			if (i % 5 == 0)
				cout << endl;
			cout << setw(8) << u[i];
		}

	}


	cout << endl;
}