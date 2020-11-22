#include"Header.h"
void tim_thua_so_nguyen_to(int n) {

	for (int i = 2; i <= n; i++)
	{
		if (KTSNT(i) == true)
		{
			while (n % i == 0)
			{
				cout << " " << i;
				n /= i;
			}
		}
	}
}




