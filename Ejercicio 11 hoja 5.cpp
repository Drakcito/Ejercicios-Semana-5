#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	float a;
	double suma{}, denominador, numerador;

	do {
		cout << "Ingrese el numero de terminos(N): ";
		cin >> n;
		
	} while (n < 0);
	do{
		cout << "Ingrese el valor de (a): ";
		cin >> a;
	} while (!(a > 0.4 && a<3));
	
	for (int i = 1; i <= n; i++){

		numerador = (2 * i - 1) * pow(a, pow(2, n - 1));
		denominador = 2 * i;

		if (i % 2 == 0){
			suma = suma - pow((-1), i + 1) * (numerador / denominador);
		}
		else{
			suma = suma + pow((-1), i + 1) * (numerador / denominador);
		}
	}

	cout << "La sumatoria es: S = " << suma;

	return 0;
}