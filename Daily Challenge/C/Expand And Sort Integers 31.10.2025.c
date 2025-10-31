#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char l[n][101];
    for(int i=0; i<n; i++) {
        scanf("%s", l[i]);
    }
    int l1[n], maxVal;
    for(int i=0; i<n; i++) {
        maxVal = -1;
        for(int j=0; j<strlen(l[i]); j++) {
            char temp[102];
            strcpy(temp, l[i]);
            for(int k=0; k<atoi(&temp[j]); k++)
                temp[j] = temp[j];
            // Construct new number based on repeated char
            char newNum[102] = "";
            strncat(newNum, temp, j);
            for(int k=0; k<atoi(&temp[j]); k++) {
                char ch[2] = {temp[j], ''};
                strcat(newNum, ch);
            }
            strcat(newNum, &temp[j+1]);
            int val = atoi(newNum);
            if(val > maxVal) maxVal = val;
        }
        l1[i] = maxVal;
    }
    // Sort array
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(l1[i]>l1[j]){
                int t=l1[i]; l1[i]=l1[j]; l1[j]=t;
            }
        }
    }
    for(int i=0; i<n; i++)
        printf("%d ", l1[i]);
    return 0;
}