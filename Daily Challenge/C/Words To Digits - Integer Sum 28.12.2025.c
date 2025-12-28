#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char buf[1000];
    fgets(buf, sizeof(buf), stdin);
    char* word = strtok(buf, " ");
    char* l1[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    while(word != NULL) {
        char c[10] = "";
        int found = 0;
        for(int j = 0; j < strlen(word) && !found; j++) {
            if(isalpha(word[j])) {
                char d[10] = "";
                for(int k = j; k < strlen(word); k++) {
                    if(isalpha(word[k])) {
                        d[0] = word[k];
                        d[1] = 0;
                        break;
                    }
                }
                for(int h = 0; h < 10; h++) {
                    if(strncmp(l1[h], d, strlen(d)) == 0) {
                        sprintf(c, "%d", h);
                        found = 1;
                        break;
                    }
                }
            } else if(isdigit(word[j])) {
                c[0] = word[j];
                c[1] = 0;
                found = 1;
            }
        }
        printf("%d
", atoi(c));
        word = strtok(NULL, " ");
    }
    return 0;
}