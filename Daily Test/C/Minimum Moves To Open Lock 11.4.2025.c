#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s1[1001], s2[1001];
    scanf("%s", s1);
    scanf("%s", s2);
    int total_moves = 0;

    for (int i = 0; s1[i]; i++) {
        int d1 = s1[i] - '0';
        int d2 = s2[i] - '0';
        int clockwise = abs(d1 - d2);
        int anticlockwise = 10 - clockwise;
        total_moves += clockwise < anticlockwise ? clockwise : anticlockwise;
    }

    printf("%d\n", total_moves);
    return 0;
}