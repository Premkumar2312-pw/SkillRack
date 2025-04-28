#include <stdio.h>

int main() {
    int n, a[100], t[10000][2], p = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);
        
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && 0 <= a[i] && a[i] <= 23 && 0 <= a[j] && a[j] <= 59) {
                t[p][0] = a[i];
                t[p++][1] = a[j];
            }
        }
    }
    
    if (p == 0) 
        printf("-1");
    else {
        int mh = t[0][0], mm = t[0][1];
        for (int i = 1; i < p; i++) {
            if (t[i][0] > mh || (t[i][0] == mh && t[i][1] > mm)) {
                mh = t[i][0];
                mm = t[i][1];
            }
        }
        printf("%02d:%02d", mh, mm);
    }
}