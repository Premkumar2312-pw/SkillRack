#include <stdio.h>

int main() {
    int n, m = 0;
    scanf("%d", &n);

    int l[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &l[i]);

    for(int i = 0; i < n; i++) {
        int d = l[i];
        for(int j = i; j < n; j++)
            if(l[j] < d)
                d = l[j];

        int t = d * (n - i);
        if(t > m)
            m = t;
    }

    printf("%d", m);
    return 0;
}