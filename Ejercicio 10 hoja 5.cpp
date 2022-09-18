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
int main()
{
	int n;
	double suma{}, denominador, numerador;

	do {
		cout << "Ingrese un numero positivo (N): ";
		cin >> n;
	} while (n < 0);

	for (int i = 1; i <= n; i++){
		numerador = pow(i,i+1);
		denominador = factorial(i);

		suma = suma + (numerador / denominador);
	}

	cout << "La sumatoria es: S = " << suma;

	return 0;
}
