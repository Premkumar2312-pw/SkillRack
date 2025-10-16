#include <stdio.h>
#include <string.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    char out[R][C][12];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            {scanf("%d", &mat[i][j]);
            sprintf(out[i][j], "%d", mat[i][j]);
            }
    for(int i=0;i<R;i+=3){
        for(int j=0;j<C;j+=3){
            if(i+3<=R && j+3<=C){
                for(int k=i+1;k<i+4;k++){
                    for(int l=j+1;l<j+4;l++){
                        if(((k%3)==1 && ((l%3)==1||(l%3)==0)) || ((k%3)==0 && ((l%3)==1||(l%3)==0))){
                            int len = strlen(out[k-1][l-1]);
                            for(int x=0;x<len;x++) out[k-1][l-1][x]='*';
                        }
                        if((k%3)==2 && (l%3)==2){
                            int len = strlen(out[k-1][l-1]);
                            for(int x=0;x<len;x++) out[k-1][l-1][x]='*';
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
            printf("%s ", out[i][j]);
        printf("
");
    }
    return 0;
}