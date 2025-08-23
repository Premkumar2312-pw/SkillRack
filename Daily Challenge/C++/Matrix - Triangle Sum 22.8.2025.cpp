#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> stringToMatrix(int N, string str1, string str2) {
    vector<vector<char>> mat(N, vector<char>(N));
    int idx1 = 0, idx2 = 0, flag = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (flag == 1) {
                if (idx1 < str1.size())
                    mat[i][j] = str1[idx1++];
                else
                    mat[i][j] = str2[idx2++];
            } else {
                if (idx2 < str2.size())
                    mat[i][j] = str2[idx2++];
                else
                    mat[i][j] = str1[idx1++];
            }
            flag = 1 - flag;
        }
    }
    return mat;
}

int main() {
    int N;
    string str1, str2;
    cin >> N >> str1 >> str2;

    auto matrix = stringToMatrix(N, str1, str2);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}