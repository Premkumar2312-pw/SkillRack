#include <stdio.h>
#include <string.h>

int isVow(char ch){
    return strchr("aeiouAEIOU", ch) != NULL;
}

int main(){
    char str[105];
    scanf("%s", str);

    int n = strlen(str);
    int idx = -1;

    // find last vowel
    for(int i = 0; i < n; i++){
        if(isVow(str[i])){
            idx = i;
        }
    }

    // reverse from 0 to idx
    int i = 0, j = idx;
    while(i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("%s", str);
    return 0;
}