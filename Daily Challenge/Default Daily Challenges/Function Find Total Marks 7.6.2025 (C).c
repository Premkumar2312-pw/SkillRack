#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findTotalMarks(char* file1name, char* file2name) {
    FILE *f1 = fopen(file1name, "r");
    FILE *f2 = fopen(file2name, "r");

    if (f1 == NULL || f2 == NULL) {
        printf("Error Opening File!\n");
        return;
    }

    char names[100][31];
    int marks[100], count = 0;

    while (fgets(names[count], sizeof(names[count]), f1)) {
        names[count][strcspn(names[count], "\r\n")] = '\0'; // Remove newline or carriage return
        int len = strlen(names[count]);
        while (len > 0 && names[count][len - 1] == ' ')
            names[count][--len] = '\0';
        count++;
    }
    fclose(f1);

    for (int i = 0; i < count; i++) {
        int a, b, c;
        fscanf(f2, "%d %d %d", &a, &b, &c);
        marks[i] = a + b + c;
    }
    fclose(f2);

    f1 = fopen(file1name, "w");
    for (int i = 0; i < count; i++) {
        fprintf(f1, "%s %d\n", names[i], marks[i]);
    }
    fclose(f1);
}

