#include<iostream>
using namespace std;

int main(){
    int num = 1, positivos = 0, negativos = 0;
    int menor = 0, mayor = 0, leido = 0;
    float suma = 0, promedio = 0;

    while (num != 0) {
        cout << "Ingrese un numero: ";
        cin >> num;
        
        if (num > mayor) {
            mayor = num;
        }
        if (num<menor) {
            menor = num;
        }
        if (num < 0) {
            negativos++;
        }
        if (num > 0) {
            positivos++;
        }
        if (num != 0) {
            suma += num;
            leido++;
        }
    }
    promedio = suma / leido;
    cout << "\nNumeros Leidos: " << leido<<endl;
    cout << "Numero Mayor: " << mayor << endl;
    cout << "Numero Menor: " << menor << endl;
    cout << "Numeros Positivos: " << positivos << endl;
    cout << "Numeros Negativos: " << negativos << endl;
    cout << "Promedio: " << promedio <<endl;
    return 0;
}