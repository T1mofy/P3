#include <iostream>
using namespace std;
int main() {
	int aaaaaaaa = 128;
	int aaaaaaa = 64;
	int aaaaaa = 32;
	int aaaaa = 16;
	int aaaa = 8;
	int aaa = 4;
	int aa = 2;
	int a = 1;

	int x;
	cout << "GIB EINE ZAHL VON -255 - 255 EIN: ";
	cin >> x;
	cout << "DIE BINARRE DARSTELLUNG IST: \n";

	int bit1 = (x & a);
	int bit2 = (x & aa) >> 1;
	int bit3 = (x & aaa) >> 2;
	int bit4 = (x & aaaa) >> 3;
	int bit5 = (x & aaaaa) >> 4;
	int bit6 = (x & aaaaaa) >> 5;
	int bit7 = (x & aaaaaaa) >> 6;
	int bit8 = (x & aaaaaaaa) >> 7;
	cout << bit8 << bit7 << bit6 << bit5 << bit4 << bit3 << bit2 << bit1;
	return 0;
}
