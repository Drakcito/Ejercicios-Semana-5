#include<iostream>
using namespace std;

int main()
{
    int npar, nimpar, sumapar = 0, sumaimpar = 0;
    do{
    	cout << "Ingrese la cantidad de numeros pares a sumar: ";//2+4+6+8
    	cin >> npar;
	}while(npar<=0);
	do{
		cout << "Ingrese la cantidad de numeros impares a sumar: ";//1+3+5+7+9
    	cin >> nimpar;	
	}while(nimpar<=0);
    
    for (int i = 1; i <= npar*2; i++) {
        if (i % 2 == 0) {
            sumapar += i;//20
        }
    }
    for (int i = 1; i <= nimpar*2; i++) {
        if (i % 2 != 0) {
            sumaimpar += i;//25
        }
    }
    cout << "La suma de numeros pares es: " << sumapar << endl;
    cout << "La suma de numeros impares es: " << sumaimpar << endl;
    return 0;
}
