#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int is_step_number(const char *num_str) {
    for (int i = 0; num_str[i + 1] != '\0'; i++) {
        if (abs(num_str[i] - num_str[i + 1]) != 1) {
            return 0;
        }
    }
    return 1;
}

void convert_to_base(int n, int base, char *res) {
    char temp[32];
    int index = 0;

    while (n > 0) {
        temp[index++] = (n % base) + '0';
        n /= base;
    }
    temp[index] = '\0';

    // Reverse the string
    for (int i = 0; i < index; i++) {
        res[i] = temp[index - i - 1];
    }
    res[index] = '\0';
}

int main() {
    int n;
    scanf("%d", &n);
    int found = 0;
    char base_repr[32];

    for (int base = 2; base <= 10; base++) {
        convert_to_base(n, base, base_repr);
        if (is_step_number(base_repr)) {
            printf("%s\n", base_repr);
            found = 1;
        }
    }
    if (!found) printf("-1\n");

    return 0;
}
