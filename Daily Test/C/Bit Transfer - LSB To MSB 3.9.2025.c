#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int N; scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++) scanf("%d", &arr[i]);
    
    char bin[N][50];
    for(int i=0; i<N; i++) {
        itoa(arr[i], bin[i], 2);
    }
    
    char extra[50];
    int len = strlen(bin[0]);
    sprintf(extra, "%c%.*s", bin[N-1][len-1], len-1, bin[0]);
    printf("%d ", (int)strtol(extra, NULL, 2));
    
    for(int i=1; i<N; i++) {
        len = strlen(bin[i]);
        char tmp[50];
        sprintf(tmp, "%c%.*s", bin[i-1][len-1], len-1, bin[i]);
        printf("%d ", (int)strtol(tmp, NULL, 2));
    }
    return 0;
}