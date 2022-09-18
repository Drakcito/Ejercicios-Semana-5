#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	int r, num;

	//Funcion Random
	srand(time(NULL));
	r = 1+ rand() % (101-1);//1 y 100

	for (int i = 1; i <= 12; i++) {//Intentos
		cout << "\nIntento " << i << "- Ingrese N: ";
		cin >> num;

		if (i == 12) {
			cout << "\nSe acabaron los intentos :(\nEl numero era: " << r << endl;
			break;
		}
		else if (r < num) {
			cout << "\nEL numero es menor";
			
		}
		else if (r > num) {
			cout << "\nEl numero es mayor";

		}
		else if (r == num) {
			cout << "\nFue pura suerte ! !";
			break;
		}
	}

	return 0;
}
