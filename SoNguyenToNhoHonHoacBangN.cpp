int PrimeNumber(int n) // Tìm các số nguyên tố nhỏ hơn hoặc bằng n
{
    cout << "All prime numbers less or equal to n are: ";
    for (int i = 1; i <= n; i++) {
        if (CheckPrimeNumber(i) == true) cout << i << " ";
    }
    cout << endl;
}
