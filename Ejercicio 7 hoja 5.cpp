#include <iostream>
using namespace std;

int main(){
	int vendedores, base, venta1, venta2, venta3, comision;
	double total;
	cout << "Ingresa el numero de vendedores: "; 
	cin >> vendedores;
	cout << "Ingresa el sueldo base: ";
	cin >> base;
	for (int i = 1; i <= vendedores; i++) {
		cout << "\nIngresa la primera venta del " << i << ": "; 
		cin >> venta1;
		cout << "Ingresa la segunda venta del " << i << ": "; 
		cin >> venta2;
		cout << "Ingresa la tercera venta del " << i << ": "; 
		cin >> venta3;
		comision = (venta1 + venta2 + venta3) * 0.1;
		total = base + comision;
		cout << "\nComision vendedor " << i << ": /S." << comision;
		cout << "\nSueldo total vendedor "<<i<<": /S." << total << endl;
	}
	return 0;
}
