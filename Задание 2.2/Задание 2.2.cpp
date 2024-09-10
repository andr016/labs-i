#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Задание 2.2" << endl;
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