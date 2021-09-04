#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	// Take two any values
	float a, b;
	bool hasil;
	a = 10.2;
	b = 8.5;


	hasil = islessgreater(a, b);
	cout << a << " islessgreater than " << b << ": " << hasil << endl;

	int x = 2;

	hasil = islessgreater(x, a);
	cout << x << " islessgreater than " << a << ": " << hasil << endl;

	a = 8.5;

	hasil = islessgreater(a, b);
	cout << a << " islessgreater than " << b << ": " << hasil;

	_getch();
	return 0;
}
