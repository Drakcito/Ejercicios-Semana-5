#include <iostream>
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
	double suma{},denominador, numerador;

	do{
		cout << "Ingrese un numero positivo (N): ";
		cin >> n;
	} while (n <= 0);
	
	for (int i = 1; i <= n; i++){
		numerador = i;
		denominador = factorial(i);

		if (i % 2 == 0){
			suma = suma - (numerador / denominador);
		}else{
			suma = suma + (numerador / denominador);
		}
	}
	cout << "La sumatoria es: S = " << suma;
	return 0;
}
