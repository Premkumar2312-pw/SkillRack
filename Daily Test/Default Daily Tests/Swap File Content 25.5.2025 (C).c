#include <stdio.h>

void swapFileContent(char *file1name, char *file2name)
{
    FILE *f1 = fopen(file1name, "r"), *f2 = fopen(file2name, "r");
    char content1[10000], content2[10000];
    
    fread(content1, 1, sizeof(content1), f1);
    fread(content2, 1, sizeof(content2), f2);
    fclose(f1); fclose(f2);
    
    f1 = fopen(file1name, "w");
    f2 = fopen(file2name, "w");
    fputs(content2, f1);
    fputs(content1, f2);
    fclose(f1); fclose(f2);
}