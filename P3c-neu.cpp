//OUT = a & d | a & c & b ^ c

#include <iostream>
using namespace std;
int main() {
	int h = 8;
	int g = 4;
	int f = 2;
	int e = 1;

	
	cout << " ZAHL VON 0-15 \n";
	
	int x = 0;
	for (int i = 0; i < 16; i++) {
		int a = (i & e);
		int b = (i & f) >> 1;
		int c = (i & g) >> 2;
		int d = (i & h) >> 3;
		cout << d << c << b << a;
		int OUT = (a & d | (a & c & (b ^ c)));
		cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << "OUT = " << OUT << "\n";
	}
	
	
	

	return 0;
}
