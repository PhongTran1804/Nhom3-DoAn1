int PrimeNumber(int n)
{
    cout << "All prime numbers less or equal to n are: ";
    for (int i = 1; i <= n; i++) {
        if (CheckPrimeNumber(i) == true) cout << i << " ";
    }
    cout << endl;
}