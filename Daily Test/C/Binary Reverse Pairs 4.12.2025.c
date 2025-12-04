#include <stdio.h>
#include <string.h>

void toBinary(int n, char *bin) {
    int i = 0;
    while(n > 0) {
        bin[i++] = (n % 2) + '0';
        n /= 2;
    }
    bin[i] = '\0'; // reversed binary
}

void reverse(char *s) {
    int i = 0, j = strlen(s) - 1;
    while(i < j) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++; j--;
    }
}

int main() {
    int n, i, j;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int found = 0;

    for(i = 0; i < n - 1; i++) {
        char bi[40], bj[40];
        toBinary(arr[i], bi);

        for(j = i + 1; j < n; j++) {
            toBinary(arr[j], bj);

            char revbj[40];
            strcpy(revbj, bj);
            reverse(revbj);

            if(strcmp(bi, revbj) == 0) {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(!found)
        printf("-1");

    return 0;
}