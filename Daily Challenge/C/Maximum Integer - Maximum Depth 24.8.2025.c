#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int d = 0, md = 0;
    int numbers[100][1000];  // store numbers by depth
    int count[100] = {0};

    for (int i = 0; i < strlen(s); ) {
        if (s[i] == '(') { d++; if (d > md) md = d; i++; }
        else if (s[i] == ')') { d--; i++; }
        else if (isdigit(s[i])) {
            int n = 0;
            while (i < strlen(s) && isdigit(s[i])) {
                n = n * 10 + (s[i] - '0');
                i++;
            }
            numbers[d][count[d]++] = n;
        } else i++;
    }

    while (md > 0 && count[md] == 0) md--;
    int max = 0;
    for (int j = 0; j < count[md]; j++)
        if (numbers[md][j] > max) max = numbers[md][j];

    printf("%d\n", max);
    return 0;
}