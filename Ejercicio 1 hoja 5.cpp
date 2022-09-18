#include<iostream>
using namespace std;

int main(){
    int num;
    
    do{
    cout << "Ingrese un numero: ";
    cin >> num;	
	}while(num<0);
    
    for (int i = 1; i <11; i++){
        cout << num << " x " << i << " = " << num * i<<endl;
    }
    return 0;
}
