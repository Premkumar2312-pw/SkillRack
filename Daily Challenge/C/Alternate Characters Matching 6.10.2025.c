#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s1[101], s2[101];
    scanf("%s%s", s1, s2);
    for (int i = 0; s1[i]; i++) s1[i] = tolower(s1[i]);
    for (int i = 0; s2[i]; i++) s2[i] = tolower(s2[i]);
    if (strcmp(s1, s2) == 0) { printf("NO
"); return 0; }
    int n = strlen(s1), even = 1, odd = 1;
    for (int i = 0; i < n; i += 2) if (s1[i] != s2[i]) even = 0;
    for (int i = 1; i < n; i += 2) if (s1[i] != s2[i]) odd = 0;
    if (even || odd) printf("YES
"); else printf("NO
");
    return 0;
}