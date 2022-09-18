#include <iostream>
using namespace std;
int main() {
	int n, columna = 0, posicion = 0, letra = 64, c = 0, abajo = 2;

	do {
		cout << "Ingrese N: ";
		cin >> n;
	} while (n <= 0 || n > 10);

	posicion = n;
	columna++;
	//Triangulo arriba
	for (int i = 1; i <= n + 2; i++) {
		if (i > 1) {
			for (int j = 1; j < n * 2; j++) {
				if (posicion == j) {
					c = 1;
					for (int x = 2; x <= columna * 2; x++) {
						cout << char(letra + c) << " ";
						c++;
					}
				}
				else cout << "  ";


			}//J
			columna += 1;
			posicion -= 1;
			if (!(i == n + 1)) {
				cout << "\n";
			} 
		}
	}
	//Triangulo abajo
	n -= 1;
	columna = n;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < n * 2; j++) {
			if (j == abajo) {
				c = 1;
				for (int x = 1; x <= columna * 2 - 1; x++) {
					cout << char(letra + c) << " ";
					c++;
				}
			}
			else cout << "  ";
		}
		abajo += 1;
		columna -= 1;
		if (!(i == n)) {
			cout << "\n";
		}
	}
	cout << "\n";
		
	return 0;
}
