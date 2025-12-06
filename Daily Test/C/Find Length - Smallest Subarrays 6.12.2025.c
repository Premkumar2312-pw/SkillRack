#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr1[1005], arr2[1005];
    for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &arr2[i]);

    for (int idx = 0; idx < n; idx++) {
        int need = arr2[idx];
        int ele = arr1[idx];
        int cnt = 0, len = 0;
        int found = 0;

        for (int j = idx; j < n; j++) {
            len++;
            if (arr1[j] == ele) {
                cnt++;
                if (cnt >= need) {
                    printf("%d ", len);
                    found = 1;
                    break;
                }
            }
        }
        if (!found) printf("-1 ");
    }
    return 0;
}