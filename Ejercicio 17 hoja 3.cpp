#include <iostream>
using namespace std;
int main(){
    int num;
    int i, j;
    
    do{
        cout << "Ingrese un numero: ";
        cin >> num;
    } while (num>=10);

    for (i = 1; i <= num; i++) {
        for (j = 1; j < num-i+1; j++) {
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << j<<" ";
        }
        for (j= j-2; j >= 1; j--) {
            cout << j<<" ";
        }
        cout << "\n";
    }

    return 0;
}