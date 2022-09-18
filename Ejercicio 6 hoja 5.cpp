#include <iostream>
using namespace std;
int main() {
	int num, edad, H, M;
	char sexo, ec;
	short cviudas = 0,chm=0,chombres=0,cmujeres=0;
	
	cout << "Ingrese el numero de tarjetas: ";
	cin >> num;
	
	for (int i = 1; i <= num; i++) {//Intentos
		cout <<"\n" << i << ". Sexo(Hombre:H, Mujer:M): ";
		cin >> sexo;
		cout << i << ". Edad: "; 
		cin >> edad;
		cout << i << ". Estado Civil (A: Soltero; B: Casado; C: Viudo; D: Divorciado): ";
		cin >> ec;
		sexo = toupper(sexo);
		ec = toupper(ec);

		if ((sexo=='M')&&(ec == 'C') && (edad > 17 && edad < 22)) {
			cviudas++;
		}
		if ((sexo == 'H') && (edad > 30) && (ec == 'A' || ec == 'D')) {
			chm++;
		}
		if (sexo == 'H') {
			chombres++;
		}
		if (sexo == 'M') {
			cmujeres++;
		}
		H = (chombres / num) * 100;
		M = (cmujeres / num) * 100;
		while (i == num) {
			cout << "\nNumero de jovenes viudas que están entre 16 y 21 anmos: " << cviudas;
			cout << "\nPorcentaje de hombres es: " << H << "\nPorcentaje de mujeres en el distrito : "<< M;
			cout << "\nNumero de hombres mayores de 30 anmos solteros o divorciados: " << chm << endl;
			break;
		}
	}
	return 0;
}