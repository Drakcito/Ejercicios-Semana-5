#include <iostream>
using namespace std;

int main()
{
    int contador = 1, code, alumnos;
    int primerdigito, contarupc = 0, contarpucp = 0, contarunmsm = 0, contarunfv = 0, contarulima = 0, contaruch = 0;

    cout << "Ingrese cantidad de universitarios: ";
    cin >> alumnos;

    while (contador <= alumnos) {
        cout << "Ingrese el codigo " << contador << ": ";
        cin >> code;

        primerdigito = (code / 100000);

        if (primerdigito >= 1 && primerdigito <= 2) {
            contarupc++;
        } 
        if (primerdigito >= 3 && primerdigito <= 4) {
            contarpucp++;
        }
        if (primerdigito == 5) {
            contarunmsm++;
        } 
        if (primerdigito == 6) {
            contarunfv++;
        } 
        if (primerdigito == 7) {
            contarulima++;
        }
        if (primerdigito == 8) {
            contaruch++;
        }
        contador++;
    }

    cout << "El numero de universitarios UPC: " << contarupc << endl;
    cout << "El numero de universitarios PUCP: " << contarpucp << endl;
    cout << "El numero de universitarios UNMSM: " << contarunmsm << endl;
    cout << "El numero de universitarios UNFV: " << contarunfv << endl;
    cout << "El numero de universitarios ULIMA: " << contarulima << endl;
    cout << "El numero de universitarios UCH: " << contaruch << endl;

    return 0;
}
