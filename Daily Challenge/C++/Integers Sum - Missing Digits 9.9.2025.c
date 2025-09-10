#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    char arr[N][20];
    for (int i = 0; i < N; i++) scanf("%s", arr[i]);
    
    char q[11] = "";
    for (int i = 9; i >= 0; i--) {
        char temp[2];
        sprintf(temp, "%d", i);
        strcat(q, temp);
    }
    
    long long cnt = 0;
    for (int i = 0; i < N; i++) {
        char val[11] = "";
        for (int j = 0; j < strlen(q); j++) {
            char digit[2] = {q[j], '\0'};
            if (strchr(arr[i], q[j]) != NULL) continue;
            strcat(val, digit);
        }
        cnt += atoll(val);
    }
    printf("%lld\n", cnt);
    return 0;
}