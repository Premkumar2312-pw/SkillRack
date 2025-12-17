long long compressBinary(int N) {
    int b[32], i = 0, sum = 0;
    char s[100] = "", t[20];
    
    // Convert to binary array (reversed)
    while (N) { b[i++] = N % 2; N /= 2; }
    
    // Process from most significant bit (end of array) to least
    for (int j = i - 1; j >= 0; j--) {
        sum += b[j];
        if (j == 0 || b[j] != b[j-1]) {
            sprintf(t, "%d", sum);
            strcat(s, t);
            sum = 0;
        }
    }
    
    long long res;
    sscanf(s, "%lld", &res);
    return res;
}