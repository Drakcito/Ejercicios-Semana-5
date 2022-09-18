#include <iostream>
using namespace std;

int main() {
	int n;
	do {
		cout << "Ingrese N: ";
		cin >> n;
	} while (n <= 0 || n > 10);

	for (int i = 0; i < 5; i++) {
		for (int num = 0; num < n; num++) {
			for (int j = 0; j < 5; j++) {
				if (j == 0 || i == j || i == (5 - 1)) {
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "  ";
		}
		cout << "\n";
	}
	return 0;
}