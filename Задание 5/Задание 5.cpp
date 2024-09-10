#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;
void l21() {
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
void l22() {
	cout << "Задание 2.2, выполнил" << endl;
	cout << "студент 1бИТС2 Рагимов Алан" << endl << endl;
	double A1, A2, A3, end, str, num;
	int k = 0;
	cout << "Введите первую границу: "; cin >> str;
	cout << "Введите вторую границу: "; cin >> end;
	cout << "Введите переменную A1: "; cin >> A1;
	cout << "Введите переменную A2: "; cin >> A2;
	cout << "Введите переменную A3: "; cin >> A3;
	if (str > end) {
		num = str;
		str = end;
		end = num;
	}
	if (A1 >= str && A1 <= end) {
		cout << "A1 входит в диапазон" << endl;
		k++;
	}
	if (A2 >= str && A2 <= end) {
		cout << "A2 входит в диапазон" << endl;
		k++;
	}
	if (A3 >= str && A3 <= end) {
		cout << "A3 входит в диапазон" << endl;
		k++;
	}

	if (k == 0) {
		cout << "Ни одно не входит в диапазон";
	}
	else {
		cout << "Всего входит в диапазон: " << k;
	}
	cout << endl;
}
void l31() {
	int i, N, kt;
	double k, a, X1, dX, X, Y;
	cout << "Задание 3.1, выполнил" << endl;
	cout << "студент 1бИТС2 Рагимов Алан" << endl << endl;
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
}
void l32() {
	srand(time(NULL));
	cout << "Задание 3.2, выполнил" << endl;
	cout << "студент 1бИТС2 Рагимов Алан" << endl << endl;
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
void l4() {
	cout << "Задание 4, выполнил" << endl;
	cout << "студент 1бИТС2 Рагимов Алан" << endl << endl;
	cout << "Введите ширину и высоту матрицы: ";
	int w, h;
	do {
		cin >> w >> h;
		if (w < 2 || h < 2)
			cout << "Некорректный ввод, введите повторно: ";
	} while (w < 2 || h < 2);
	double m[99][99], l;
	cout << "Введите величину L: ";
	cin >> l;
	bool inp = false;
	cout << "Введите 1 для случайного задания чисел: ";
	cin >> inp;
	double max = -99999;
	bool edin = true;
	int mi, mj;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			printf("\nЯчейка %d, %d = ", i + 1, j + 1);
			if (inp == true) {
				m[i][j] = rand() % 50; cout << m[i][j];
			}
			else { cin >> m[i][j]; }
			if (m[i][j] > max) {
				max = m[i][j];
				edin = false;
				if (i == j) { edin = true; mi = i; mj = j; }
			}
			else if (m[i][j] == max) { edin = false; }
		}
	}
	cout << "\nИтоговая матрица:\n";
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (edin && max > l) { if (i != mi || j != mj) m[i][j] /= max; }
			else { if (j - i > 0) m[i][j] += l; }
			cout << setw(16) << m[i][j];
		}
		cout << endl;
	}
}
int main() {
	bool a = 0;
	do {
		system("CLS");
		setlocale(0, "");
		cout << "Задание 5 (Создание итогового меню), выполнил" << endl;
		cout << "студент 1бИТС2 Рагимов Алан" << endl << endl;
		cout << "Лабораторные работы:" << endl;
		cout << "1. Вычисление с выбором формул (л/р 2.1)" << endl;
		cout << "2. Анализ исходных данных и принятие решения (л/р 2.2)" << endl;
		cout << "3. Организация цикла с несколькими параметрами и проверкой условий (л/р 3.1)" << endl;
		cout << "4. Обработка одномерных массивов (л/р 3.2)" << endl;
		cout << "5. Обработка матриц (л/р 4)" << endl << endl;
		cout << "Введите номер лабораторной работы: ";
		int i;
		do {
			cin >> i;
			if (i < 1 || i > 5)
				cout << "Некорректный ввод, введите повторно: ";
		} while (i < 1 || i > 5);
		switch (i) {
		case 1:
			l21(); break;
		case 2:
			l22(); break;
		case 3:
			l31(); break;
		case 4:
			l32(); break;
		case 5:
			l4(); break;
		}
		cout << "Введите 1 чтобы продолжить или любое другое число чтобы выйти: ";
		cin >> a;
	} while (a == 1);
	return 0;
}