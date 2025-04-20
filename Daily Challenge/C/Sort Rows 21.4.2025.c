#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Row {
    char ch;
    int index;
    char data[200];
};

int compare(const void *a, const void *b) {
    struct Row *r1 = (struct Row *)a;
    struct Row *r2 = (struct Row *)b;
    if (r1->ch != r2->ch)
        return r1->ch - r2->ch;
    return r2->index - r1->index;
}

int main() {
    int r, c;
    scanf("%d %d\n", &r, &c);
    struct Row arr[55];

    for (int i = 0; i < r; i++) {
        fgets(arr[i].data, sizeof(arr[i].data), stdin);
        arr[i].data[strcspn(arr[i].data, "\n")] = 0;
        char *tok = strtok(arr[i].data, " ");
        while (tok) {
            if (isalpha(tok[0])) {
                arr[i].ch = tok[0];
                break;
            }
            tok = strtok(NULL, " ");
        }
        arr[i].index = i;
    }

    qsort(arr, r, sizeof(struct Row), compare);

    for (int i = 0; i < r; i++) {
        printf("%s\n", arr[i].data);
    }

    return 0;
}