#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int mat[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &mat[i][j]);

    int mid = n/2;

    if(n%2==1){
        printf("%d", mat[mid][mid]);
    } else {
        for(int i=mid-1;i<mid+1;i++){
            for(int j=mid-1;j<mid+1;j++){
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    }
}