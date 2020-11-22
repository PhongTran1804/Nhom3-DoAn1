
void tim_thua_so_nguyen_to(int n) {

	for (int i = 2; i <= n; i++)
	{
		if (KTSNT(i) == true)
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





