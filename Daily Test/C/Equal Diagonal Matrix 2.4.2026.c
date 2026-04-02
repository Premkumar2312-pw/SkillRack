#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int left[n], right[n];

    for(int i = 0; i < n; i++) {
        left[i] = matrix[i][i];
        right[i] = matrix[i][n - i - 1];
    }

    int unique_left[n], unique_right[n];
    int ul = 0, ur = 0;

    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = 0; j < ul; j++)
            if(unique_left[j] == left[i]) found = 1;
        if(!found) unique_left[ul++] = left[i];

        found = 0;
        for(int j = 0; j < ur; j++)
            if(unique_right[j] == right[i]) found = 1;
        if(!found) unique_right[ur++] = right[i];
    }

    int equal = (ul == ur);

    for(int i = 0; i < ul && equal; i++) {
        int found = 0;
        for(int j = 0; j < ur; j++)
            if(unique_left[i] == unique_right[j]) found = 1;
        if(!found) equal = 0;
    }

    if(equal) printf("yes");
    else printf("no");

    return 0;
}