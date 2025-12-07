#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);
    int mid = n / 2;
    
    char result[1000] = {0};
    result[0] = s[mid];
    
    bool visited[256] = {false};
    visited[(unsigned char)s[mid]] = true;
    
    int offset = 1;
    int res_len = 1;
    
    while (true) {
        if (mid - offset < 0 || mid + offset >= n) break;
        
        char left_char = s[mid - offset];
        result[res_len++] = left_char;
        if (visited[(unsigned char)left_char]) break;
        visited[(unsigned char)left_char] = true;
        
        char right_char = s[mid + offset];
        result[res_len++] = right_char;
        if (visited[(unsigned char)right_char]) break;
        visited[(unsigned char)right_char] = true;
        
        offset++;
    }
    
    printf("%s
", result);
    return 0;
}