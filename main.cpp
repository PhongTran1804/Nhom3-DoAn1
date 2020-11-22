#include "Header.h"
int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if (KTSNT(n) == true) cout << n << " la so nguyen to" << endl;
	else cout << n << " khong la so nguyen to" << endl;
	SNT_nhohonhoacbang_n(n); cout << endl;
	phaiquatrai(n); cout << endl;
	cout << n << " phan tich thanh thua so nguyen to: ";
	tim_thua_so_nguyen_to(n);
	cout << endl;
	
}
