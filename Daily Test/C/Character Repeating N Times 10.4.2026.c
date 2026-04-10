#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    int n;
    scanf("%s %d", str, &n);

    int freq[26] = {0};
    int printed[26] = {0};

    for(int i = 0; str[i]; i++)
        freq[str[i] - 'a']++;

    for(int i = 0; str[i]; i++){
        int idx = str[i] - 'a';
        if(freq[idx] == n && !printed[idx]){
            printf("%c", str[i]);
            printed[idx] = 1;
        }
    }

    return 0;
}