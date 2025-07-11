#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void sortAndSplitWords(char *file1name, char *file2name)
{
    FILE* f1 = fopen(file1name,"r"), *f2 = fopen(file2name,"r");
    char *w[100], s[101];
    int i = 0, n;

    // Read from file1
    while(fgets(s, sizeof(s), f1)){
        s[strcspn(s, "\n")] = 0; // remove newline
        if(strlen(s) == 0) continue; // skip empty
        w[i] = malloc(strlen(s) + 1);
        strcpy(w[i++], s);
    }

    // Read from file2
    while(fgets(s, sizeof(s), f2)){
        s[strcspn(s, "\n")] = 0;
        if(strlen(s) == 0) continue; // skip empty
        w[i] = malloc(strlen(s) + 1);
        strcpy(w[i++], s);
    }

    fclose(f1); fclose(f2);
    n = i;

    // Sort all words
    for(i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(w[i], w[j]) > 0) {
                char *tmp = w[i];
                w[i] = w[j];
                w[j] = tmp;
            }
        }
    }

    int half = n / 2;

    // Write back to file1
    f1 = fopen(file1name, "w");
    for(i = 0; i < half; i++) {
        fprintf(f1, "%s", w[i]);
        if(i != half - 1) fprintf(f1, "\n");
    }
    fclose(f1);

    f2 = fopen(file2name, "w");
    for(; i < n; i++) {
        fprintf(f2, "%s", w[i]);
        if(i != n - 1) fprintf(f2, "\n");
    }
    fclose(f2);

    // Free memory
    for(i = 0; i < n; i++) {
        free(w[i]);
    }
}
