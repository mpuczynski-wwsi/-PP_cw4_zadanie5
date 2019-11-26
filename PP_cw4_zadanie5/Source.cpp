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

}