#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "Задание 4" << endl;
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
	return 0;
}
