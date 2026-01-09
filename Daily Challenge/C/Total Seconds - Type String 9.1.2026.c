#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char K[27], S[1005];
    int pos[26];

    scanf("%s", K);
    scanf("%s", S);

    for (int i = 0; i < 26; i++)
        pos[K[i] - 'a'] = i;

    int time = 0;
    for (int i = 1; S[i]; i++) {
        int prev = pos[S[i - 1] - 'a'];
        int curr = pos[S[i] - 'a'];
        time += abs(curr - prev);
    }

    printf("%d", time);
    return 0;
}