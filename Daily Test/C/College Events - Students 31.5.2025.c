#include <stdio.h>
int main() {
    int n, i, j, h1, m1, h2, m2, s, e, f = 1;
    int st[100], et[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
        st[i] = h1 * 60 + m1;
        et[i] = h2 * 60 + m2;
    }
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(st[i] > st[j]) {
                int t;
                t = st[i]; st[i] = st[j]; st[j] = t;
                t = et[i]; et[i] = et[j]; et[j] = t;
            }
        }
    }
    for(i = 1; i < n; i++) {
        if(st[i] < et[i-1]) {
            f = 0;
            break;
        }
    }
    printf(f ? "YES\n" : "NO\n");
    return 0;
}