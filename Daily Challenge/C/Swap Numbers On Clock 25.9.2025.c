#include <stdio.h>
#include <string.h>

int main() {
    char c[5][5][5] = {
        {"*", "11", "12", "1", "*"},
        {"10", "*", "*", "*", "2"},
        {"9", "*", "*", "*", "3"},
        {"8", "*", "*", "*", "4"},
        {"*", "7", "6", "5", "*"}
    };
    int n;
    scanf("%d", &n);
    char a[20][10], b[20][10];
    for(int i=0;i<n;i++) scanf("%s %s", a[i], b[i]);

    for(int k=0;k<n;k++) {
        for(int i=0;i<5;i++) {
            for(int j=0;j<5;j++) {
                if(strcmp(c[i][j], a[k])==0) strcpy(c[i][j], b[k]);
                else if(strcmp(c[i][j], b[k])==0) strcpy(c[i][j], a[k]);
            }
        }
    }

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) printf("%s ", c[i][j]);
        printf("\n");
    }
    return 0;
}