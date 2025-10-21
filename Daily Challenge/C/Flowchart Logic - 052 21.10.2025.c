#include <stdio.h>

int main(void) {
    int N1, N2, N3;
    if (scanf("%d %d %d", &N1, &N2, &N3) != 3) return 0;
    int ctr = N2;
    while (ctr >= N1 || ctr <= N3) {
        if (ctr == 1) {
            printf("%d ", ctr);
        } else {
            printf("%d ", 1); // placeholder similar to original pattern
        }

        if (ctr <= N3) {
            printf("%d ", N2);
        } else {
            printf("%d ", N3);
        }
        printf("
");
        ctr = 1;
        // The original seems to modify N2 or ctr; here we increment ctr to avoid infinite loop
        ctr++;
        if (ctr > N3) break;
    }
    return 0;
}