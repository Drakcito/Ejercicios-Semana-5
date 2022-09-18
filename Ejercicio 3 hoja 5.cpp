#include<iostream>
using namespace std;

int main()
{
    int alumnos, EF, EP, TF;
    do {
        cout << "Ingrese el numero de alumnos: ";
        cin >> alumnos;
    } while (alumnos <= 0);
    
    for (int i = 1; i <= alumnos; i++) {
        cout << "\nIngrese el EF del Alumno " << i << ": ";
        cin >> EF;
        cout << "Ingrese el EP del Alumno " << i << ": ";
        cin >> EP;
        cout << "Ingrese el TF del Alumno " << i << ": ";
        cin >> TF;
        cout << "\nSu promedio final es: " << EF * 0.55 + EP * 0.3 + TF * 0.15 << endl;
    }
    return 0;
}