#include <stdio.h>
#include <ctype.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char m[r][c][5];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%s", m[i][j]);
        }
    }
    char ch;
    scanf(" %c", &ch);
    int f = ch, b = ch;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(m[i][j][0]=='1'){
                printf("%c ", f);
                if(islower(f))
                    f = 'a' + (f-'a'+1)%26;
                else
                    f = 'A' + (f-'A'+1)%26;
            } else {
                printf("%c ", b);
                if(islower(b))
                    b = 'a' + (b-'a'-1+26)%26;
                else
                    b = 'A' + (b-'A'-1+26)%26;
            }
        }
        printf("\n");
    }
    return 0;
}