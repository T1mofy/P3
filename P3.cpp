

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	while (true)
	{
		int a = 0, b = 0, c = 0;
		cout << "GIB DIE ZAHLEN EIN \n";
		cin >> a >> b;
		cout << "TIPPE \n 0 BREAK FREE \n 1 ODER \n 2 UND \n 3 XOR \n";
		cin >> c;
		if (c == 1)
		{
			cout << a << "=" << bitset<4>(a) << "\n";
			cout << b << "=" << bitset<4>(b) << "\n";
			cout << "DAS ERGEBNIS IST: " << (a | b) << "\n";
		}
		else if (c == 2)
		{
			cout << a << "=" << bitset<4>(a) << "\n";
			cout << b << "=" << bitset<4>(b) << "\n";
			cout << "DAS ERGEBNIS IST: " << (a & b) << "\n";
		}
		else if (c == 3)
		{
			cout << a << "=" << bitset<4>(a) << "\n";
			cout << b << "=" << bitset<4>(b) << "\n";
			cout << "DAS ERGEBNIS IST: " << (a ^ b) << "\n";
		}
		else if (c == 0)
		{
			break;
		}
		else
		{
			cout << "FALSCHE EINGABE \n";
		}
	}
	
	return 0;

}

