#include <stdio.h>
int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    char mat[N][N];
    
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            mat[i][j] = '*';
    
    for(int i=0; i<N; i++) {
        if(i == K-1 || i == N-K) {
            for(int j=K-1; j<=N-K; j++) mat[i][j] = '#';
        } else if(i >= K-1 && i <= N-K) {
            mat[i][K-1] = '#';
            mat[i][N-K] = '#';
        }
        for(int j=0; j<N; j++) printf("%c ", mat[i][j]);
        printf("\n");
    }
    return 0;
}