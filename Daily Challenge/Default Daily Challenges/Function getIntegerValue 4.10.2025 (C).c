int getIntegerValue(int n) {
    char b[100];
    int I = 0, j = 0, bi = 0, c = 0;
    while(n > 0) {
        if(n % 10 >= 2) {
            if(c == 1) {
                b[I++] = bi + '0';
                bi = 0;
                j = 0;
            }
            b[I++] = n % 10 + '0';
        }
        else if(n % 10 == 1) {
            bi += (1 << j);
            j += 1;
            c = 1;
        }
        else if(n % 10 == 0) {
            j += 1;
        }
        n = n / 10;
    }
    if(c == 1) {
        b[I++] = bi + '0';
    }
    int m = 0;
    for(int k = I - 1; k >= 0; k--) {
        m = m * 10 + (b[k] - '0');
    }
    return m;
}