#include <stdio.h>
#include <string.h>

int main() {
    char n[100001];
    scanf("%s", n);
    int len = strlen(n);
    int a = 0, b = 0, c = 0;
    int count0 = 0, count1 = 0;

    for (int i = 0; i < len; i++) {
        if (n[i] == '0') count0++;
        else if (n[i] == '1') count1++;
    }

    for (int i = 0; i < len; i++) {
        if (n[i] == '1') a++;
        else b++;
        if (a < b) {
            c = 1;
            break;
        }
    }

    if (count0 == count1 && c == 0)
        printf("Yes
");
    else
        printf("No
");

    return 0;
}