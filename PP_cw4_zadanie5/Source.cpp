#include<cstdio>
#include <iostream>

using namespace std;

bool czy_pierwsza(long long a) {
	bool pierwsza = 1;
	for (int i = 2; i*i <= a; i++) {
		if (a % i == 0) {
			pierwsza = 0;
			break;
		}
	}
	return pierwsza;
}

int main() {
	int zakres1, zakres2;
	cout << "Znajdz wszystkie liczby pierwsze w podanym zakresie.\n";
	cout << "Podaj zakres: ";
	cin >> zakres1 >> zakres2;
	for (int i = zakres1; i <= zakres2; i++) {
		if (czy_pierwsza(i)) {
			cout << "\nLiczba " << i << " jest liczba pierwsza";
		}
	}
}