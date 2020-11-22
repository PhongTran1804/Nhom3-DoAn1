#include <iostream>
using namespace std;

bool kt_so_nguyen_to(int n) {
	if (n < 2) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	if (n > 2) {
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0) {
				return false;
			}
			else {
				return true;
			}
		}
	}
}

void tim_thua_so_nguyen_to(int n) {

	for (int i = 2; i <= n; i++)
	{
		if (kt_so_nguyen_to(i) == true)
		{
			if (n % i == 0) {
				cout << " " << i;
				while (n % i == 0) {
					n /= i;
				}
			}
		}
	}
}

void in_chu_so_phai_trai(int n) {
	int last, y = 0;
	while (n != 0) {
		last = n % 10;
		cout << " " << last;
		y = y * 10 + (n % 10);
		n = n / 10;
	}
}

void in_chu_so_trai_phai(int n) {
	int last, y = 0;
	while (n != 0)
	{
		y = y * 10 + (n % 10);
		n = n / 10;
	}
	in_chu_so_phai_trai(y);
}


int tinh_tong_cac_chu_so(int n) {
	int last, y = 0;
	while (n != 0) {
		last = n % 10;
		y += last;
		n /= 10;
	}
	return y;
}