#include <stdio.h>

int main() {
    int n, num;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d", &num);

        int digits = 0, temp = num;

        while(temp > 0){
            digits++;
            temp /= 10;
        }

        if(digits % 2 == 0)
            printf("%d ", num);
    }
}