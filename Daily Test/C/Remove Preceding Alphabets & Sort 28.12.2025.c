#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return strlen(*(char**)a) - strlen(*(char**)b);
}

int main() {
    int n;
    scanf("%d", &n);
    char** l = malloc(n * sizeof(char*));
    for(int i = 0; i < n; i++) {
        char buf[1000];
        scanf("%s", buf);
        l[i] = strdup(buf);
    }
    int len0 = strlen(l[0]);
    for(int i = 0; i < len0; i++) {
        int c = -1;
        char a[1000] = "";
        for(int j = 0; j < n; j++) {
            if(l[j][i] != '-') {
                if(c == -1) {
                    a[0] = l[j][i];
                    a[1] = 0;
                }
                if(j == strlen(a)) {
                    for(int k = 0; k < len0; k++) {
                        int f = 0;
                        for(int m = 0; m < n; m++) {
                            if(l[m][k] == a[0] && f == 0) {
                                char* newstr = realloc(l[m], strlen(l[m]) + strlen(a) + 1);
                                l[m] = newstr;
                                strcat(l[m], a);
                                f = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    qsort(l, n, sizeof(char*), compare);
    for(int i = 0; i < n; i++) {
        printf("%s
", l[i]);
        free(l[i]);
    }
    free(l);
    return 0;
}