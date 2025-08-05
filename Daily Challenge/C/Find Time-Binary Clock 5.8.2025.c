#include <stdio.h>
int main() {
    int m[4][6],d[6]={0};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            char s[3]; scanf("%s",s);
            m[i][j*2]=s[0]-'0'; m[i][j*2+1]=s[1]-'0';
        }
    }
    for(int j=0;j<6;j++)
        for(int i=0;i<4;i++) d[j]+=m[3-i][j]<<i;
    for(int i=0;i<6;i+=2){
        if(i) printf(":");
        printf("%d%d",d[i],d[i+1]);
    }
}