#include <stdio.h>

int main() {
    int n, b, d, y, c = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &b, &d);
        if(i == 0) int temp; 
    }
    scanf("%d", &y);

   
    fseek(stdin, 0, SEEK_SET); 

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &b, &d);
        if(b <= y && y < d) c++;
    }
    printf("%d\n", c);
    return 0;
}