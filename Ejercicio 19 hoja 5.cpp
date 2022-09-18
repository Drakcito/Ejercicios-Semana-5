#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n) {
	int i, producto = 1;
	for (i = n; i > 1; --i) {
		producto *= i;
	}
	return producto;
}
int main() {
	int k, a, b;
	double s = 0;
	do {
		cout << "Ingrese el valor de a: ";
		cin >> a;
	} while (a < 4 || a > 6);
	do {
		cout << "Ingrese el valor de b: ";
		cin >> b;
	} while (b < 1 || b > 3);
	do {
		cout << "Ingrese el valor de n: ";
		cin >> k;
	} while (k < 1 || k > 10);

	for (int i = 1; i <= k; i++) {
		s = pow(((-1)), i + 1) * ((pow(a, i) * pow(b, i + 1)) / ((a - b) * (factorial(i)))) + s;
	}
	cout << "\nEl valor de la sumatoria es S = " << s << endl;

	return 0;
}
