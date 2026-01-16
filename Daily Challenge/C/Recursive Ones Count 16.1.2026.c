#include <stdio.h>
#include <string.h>

void toBinary(int n, char bin[]) {
    int i = 0;
    while (n > 0) {
        bin[i++] = (n % 2) + '0';
        n /= 2;
    }
    bin[i] = '\0';

    // reverse
    for (int j = 0; j < i / 2; j++) {
        char t = bin[j];
        bin[j] = bin[i - j - 1];
        bin[i - j - 1] = t;
    }
}

int main() {
    char s[1000];
    scanf("%s", s);

    while (1) {
        int count = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] == '1') count++;
        }

        printf("%d", count);

        if (count == 1) break;

        printf(" ");
        toBinary(count, s);
    }
    return 0;
}