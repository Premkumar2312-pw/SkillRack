int findDigitsBitMask(long long int n)
{
    int m = 0;
    if (n == 0) { 
        return 1; 
    }
    while (n > 0) {
        int d = n % 10;
        m = m | (1 << d);
        n /= 10;
    }
    return m;
}