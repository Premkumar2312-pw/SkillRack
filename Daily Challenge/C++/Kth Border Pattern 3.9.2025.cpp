#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    vector<vector<char>> mat(N, vector<char>(N, '*'));
    
    for(int i=0; i<N; i++) {
        if(i == K-1 || i == N-K) {
            for(int j=K-1; j<=N-K; j++) mat[i][j] = '#';
        } else if(i >= K-1 && i <= N-K) {
            mat[i][K-1] = '#';
            mat[i][N-K] = '#';
        }
        for(int j=0; j<N; j++) cout << mat[i][j] << " ";
        cout << "\n";
    }
}