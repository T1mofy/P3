
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
	cout << "DIE BINARRE DARSTELLUNG IST: ";
	if (x & aaaaaaaa) cout << "1"; else cout << "0";
	if (x & aaaaaaa) cout << "1"; else cout << "0";
	if (x & aaaaaa) cout << "1"; else cout << "0";
	if (x & aaaaa) cout << "1"; else cout << "0";
	if (x & aaaa) cout << "1"; else cout << "0";
	if (x & aaa) cout << "1"; else cout << "0";
	if (x & aa) cout << "1"; else cout << "0";
	if (x & a) cout << "1"; else cout << "0";
	cout << "\n" << endl;
	return 0;
}
