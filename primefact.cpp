#include <iostream>
#include "P1.h"
using namespace std;

int main()
{
	int n, tmp = 0, sdv;
	cout << "Nhap va so n: ";
	cin >> n;	
	cout << "M = " << replace(n) << "\n";
	cout << "Tich thua so nguyen to: ";
	int cnt = 0;
	for (int i = 2; i <= n; ++i)
	{
		cnt = 0;
		while (n % i == 0)
		{
			++cnt;
			n /= i;
		}
		if (cnt)
		{
			cout << i;
			if (cnt > 1) cout << "^" << cnt;
			if (n > i) cout << "*";
		}
	}
	return 0;
}