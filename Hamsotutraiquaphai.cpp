#include <iostream>
#include <cmath>
using namespace std;
void phaiquatrai(int n)
{
	int a;
	cout << n << " in tu phai qua trai la: ";
	while (n !=0 )
	{
		a = n % 10;
		cout << a << "  ";
		n /= 10;
	}
}
