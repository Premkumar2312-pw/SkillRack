int findSeriesSum(char *s)
{
    s[strlen(s)] = '';
    int f = 0, j = 0, sum = 0;
    char c[100];
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == '-'){
            if(f == 1) {
                int e = 0;
                for(int q = 0; q < j; q++) {
                    e = e * 10 + (c[q] - '0');
                }
                sum += e;
                c[0] = '';
                j = 0;
                f = 0;
            } else {
                int y = 0, z = j - 1;
                for(int k = 0; k < j; k++) {
                    if(c[k] == '1') {
                        y = 1 < z ? z : 1;
                    } else {
                        z = 1;
                    }
                }
                sum += y;
                c[0] = '';
                j = 0;
            }
        } else {
            if(s[i] == '1' || s[i] == '0') {
                c[j++] = s[i];
            } else {
                c[j++] = s[i];
                f = 1;
            }
        }
    }
    return sum;
}