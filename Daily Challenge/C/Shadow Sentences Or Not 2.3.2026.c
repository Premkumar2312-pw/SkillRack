#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char line1[1000], line2[1000];

    fgets(line1, sizeof(line1), stdin);
    fgets(line2, sizeof(line2), stdin);

    char *a[100], *b[100];
    int n1 = 0, n2 = 0;

    a[n1] = strtok(line1, " \n");
    while(a[n1] != NULL) {
        n1++;
        a[n1] = strtok(NULL, " \n");
    }

    b[n2] = strtok(line2, " \n");
    while(b[n2] != NULL) {
        n2++;
        b[n2] = strtok(NULL, " \n");
    }

    if(n1 != n2) {
        printf("NO");
        return 0;
    }

    for(int i = 0; i < n1; i++) {
        if(strlen(a[i]) != strlen(b[i])) {
            printf("NO");
            return 0;
        }

        for(int j = 0; j < strlen(a[i]); j++) {
            if(strchr(b[i], a[i][j])) {
                printf("NO");
                return 0;
            }
        }
    }

    printf("YES");
    return 0;
}