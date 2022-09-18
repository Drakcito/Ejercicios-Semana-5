#include <iostream>
using namespace std;
int main() {
	int n;
	do {
		cout << "Ingrese N: ";
		cin >> n;
	} while (n <= 0 || n > 10);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if ( j == 1 || i == n || i == j) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}

	return 0;
}
