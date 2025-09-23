#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int arr[], int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > m) m = arr[i];
    return m;
}

void reverse(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        char tmp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = tmp;
    }
}

void binstr(int num, char *buffer) {
    int i = 0;
    while (num) {
        buffer[i++] = (num % 2) + '0';
        num /= 2;
    }
    buffer[i] = '';
    reverse(buffer);
}

int main() {
    int h;
    scanf("%d", &h);
    int l[h], s[h], v[h];
    char m[h][40];
    for (int i = 0; i < h; i++) {
        scanf("%d", &l[i]);
        binstr(l[i], m[i]);
        reverse(m[i]);
    }

    int sc = 0, vc = 0;
    for (int i = 0; i < h; i++) {
        int k = 0;
        while (k < strlen(m[i])) {
            if (m[i][k] == '0') {
                int j = k, c = 0;
                while (m[i][j] != '0' && j < strlen(m[i])) {
                    c++;
                    j++; k++;
                }
                s[sc] = c;
                v[vc++] = i;
            } else {
                k++;
            }
        }
    }

    int d = max(s, sc);
    int g[h], gc = 0;
    for (int i = sc - 1; i >= 0; i--) {
        int found = 0;
        for (int j = 0; j < gc; j++)
            if (g[j] == l[v[i]]) found = 1;
        if (d == s[i] && !found) {
            printf("%d ", l[v[i]]);
            g[gc++] = l[v[i]];
        }
    }
    return 0;
}