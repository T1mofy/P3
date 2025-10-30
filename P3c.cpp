//OUT = a & d || a & c && b ^ c

#include <iostream>
using namespace std;
int main() {
	int h = 8;
	int g = 4;
	int f = 2;
	int e = 1;
	int a, b, c, d;

	int x;
	cout << "GIB EINE ZAHL VON 0-15 ";
	cin >> x;
	if (x & e) {
		a = 1;
	} else {
		a = 0;
	}
	if (x & f) {
		b = 1;
	} else {
		b = 0;
	}
	if (x & g) {
		c = 1;
	} else {
		c = 0;
	}
	if (x & h) {
		d = 1;
	} else {
		d = 0;
	}
	int OUT;
	if (a & d || (a & c && (b ^ c))) {
		OUT = 1;
	} else {
		OUT = 0;
	}
	cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << endl;
	cout << "OUT = " << OUT << endl;

	return 0;
}
