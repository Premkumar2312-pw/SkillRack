#include <stdio.h>

int main() {
    char s[100], o, c;
    scanf("%s", s);
    o = s[0];
    int n = atoi(s + 1);
    
    if (o == '(') c = ')';
    else if (o == '[') c = ']';
    else if (o == '{') c = '}';
    else if (o == '<') c = '>';
    
    for (int i = 1; i <= n; i++) {
        for (int j = i; j > 0; j--) {
            for (int k = 0; k < j; k++) printf("%c", o);
            for (int k = 0; k < j; k++) printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}