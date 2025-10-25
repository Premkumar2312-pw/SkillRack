static int get_num_bits(int n) {
    if (n == 0) return 0;
    int b = 0;
    unsigned int t = (unsigned int)n;
    while (t > 0) { t >>= 1; b++; }
    return b;
}

int splitEqualBinary(int N) {
    if (N == 0) return 0;
    int len = get_num_bits(N);
    int half = len / 2;
    int mask = (1 << half) - 1;
    int right = N & mask;
    int left = N >> half;
    if (left == right) return left + right;
    return N;
}