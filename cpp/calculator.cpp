#include <iostream>
#include <string>

using namespace std;

float calculator(float x, float y, char op) {
	switch (op) {
	
	case '+':
		return x+y;
	case '-':
		return x-y;
	case '*':
		return x*y;
	case '/':
		return x/y;
	}
	cerr << "Operator " << op << " jest nieobslugiwany\n";
	exit(1);
}

int main() {
	char x = 0;
	while (x!='q') {
		float a, b;
		cout << "Podaj operacje: ";
		cin >> x;
		cout << "Podaj liczbe a: ";
		cin >> a;
		cout << "Podaj liczbe b: ";
		cin >> b;
		cout << "Wynik: " << calculator(a, b, x) << endl;
	}
	return 0;
}
