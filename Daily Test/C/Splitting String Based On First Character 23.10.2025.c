#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SEGMENTS 100
#define MAX_LEN 100

int cmpfunc(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char s[MAX_LEN], s1[MAX_LEN + 2], p[MAX_LEN];
    char* segments[MAX_SEGMENTS];
    int seg_count = 0;
    scanf("%s", s);
    int len = strlen(s);
    strcpy(s1, s);
    s1[len] = s[0];
    s1[len + 1] = '';
    char c = s1[0];
    p[0] = '';
    for (int i = 0; i < strlen(s1); ++i) {
        if (s1[i] == c && i > 0) {
            segments[seg_count] = strdup(p);
            seg_count++;
            p[0] = '';
            c = s1[i];
        } else {
            int plen = strlen(p);
            p[plen] = s1[i];
            p[plen + 1] = '';
        }
    }
    qsort(segments, seg_count, sizeof(char *), cmpfunc);
    for (int i = 0; i < seg_count; ++i) {
        printf("%s ", segments[i]);
        free(segments[i]);
    }
    return 0;
}