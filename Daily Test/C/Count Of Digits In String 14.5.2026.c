#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int n, x;
    scanf("%d %d", &n, &x);

    char str[1000];

    for(int i = 0; i < n; i++) {

        scanf("%s", str);

        int cnt = 0;

        for(int j = 0; str[j] != '\0'; j++) {

            if(isdigit(str[j]) && (str[j] - '0') == x) {
                cnt++;
            }
        }

        printf("%d ", cnt);
    }

    return 0;
}