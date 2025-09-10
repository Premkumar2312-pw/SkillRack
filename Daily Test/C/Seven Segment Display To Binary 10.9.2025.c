#include <stdio.h>
#include <string.h>

char* d[] = {
    "111110",  // 0
    "011000",  // 1
    "1101101", // 2
    "1111001", // 3
    "0110011", // 4
    "1011011", // 5
    "1011111", // 6
    "1110000", // 7
    "1111111", // 8
    "1111011"  // 9
};

int main() {
    char N[101], res[1001] = "";
    scanf("%100s", N);
    int i;
    for (i=0; N[i]; ++i)
        strcat(res, d[N[i]-'0']);
    int num = 0;
    for (i=0; res[i]; ++i)
        num = num*2 + (res[i]-'0');
    printf("%d\n", num);
    return 0;
}
