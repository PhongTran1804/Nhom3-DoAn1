#include <iostream>
#include <cmath>
using namespace std;
long phaiquatrai(int n)
{
	int d;
	d = n;
	while (n > 1) {
		d = n % 10;
		std::cout << d;
		n /= 10;
	}
}
