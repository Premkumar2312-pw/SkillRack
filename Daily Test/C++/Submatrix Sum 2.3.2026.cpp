#include <iostream>
#include <vector>
using namespace std;

int main() {
    int S, r, c;
    cin >> S >> r >> c;

    vector<vector<int>> m(r, vector<int>(c));

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> m[i][j];

    for(int top = 0; top < r; top++) {
        for(int left = 0; left < c; left++) {
            for(int bottom = top; bottom < r; bottom++) {
                for(int right = left; right < c; right++) {

                    int sum = 0;

                    for(int i = top; i <= bottom; i++)
                        for(int j = left; j <= right; j++)
                            sum += m[i][j];

                    if(sum == S) {
                        for(int i = top; i <= bottom; i++) {
                            for(int j = left; j <= right; j++)
                                cout << m[i][j] << " ";
                            cout << endl;
                        }
                        cout << "END" << endl;
                    }
                }
            }
        }
    }
}