#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char S[101];
    scanf("%s", S);
    int N;
    scanf("%d", &N);
    char arr[N][101];
    for (int i = 0; i < N; i++)
        scanf("%s", arr[i]);

    for (int si = 0; si < strlen(S); si++) {
        char c = S[si];
        int found = 0;
        for (int j = 0; j < N; j++) {
            int mid = strlen(arr[j]) / 2;
            if (tolower(arr[j][mid]) == tolower(c)) {
                printf("%s\n", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            int mid = strlen(arr[0]) / 2;
            int len = strlen(arr[0]);
            for (int k = 0; k < mid; k++) printf("*");
            printf("%c", c);
            for (int k = mid + 1; k < len; k++) printf("*");
            printf("\n");
        }
    }
    return 0;
}