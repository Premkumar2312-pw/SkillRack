#include <stdio.h>
#include <string.h>


int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

int main() {
    char words[100][100], result[200];
    int n, found = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                strcpy(result, words[i]);
                strcat(result, words[j]);
                if (isPalindrome(result)) {
                    printf("%s\n", result);
                    found = 1;
                    return 0;
                }
            }
        }
    }

    if (!found) {
        printf("-1\n");
    }
    return 0;
}