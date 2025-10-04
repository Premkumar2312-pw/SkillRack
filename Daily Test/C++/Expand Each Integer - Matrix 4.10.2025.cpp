#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<string>> arr(R, vector<string>(C));
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> arr[i][j];
    for (int i = 0; i < R; i++) {
        vector<char> res, cnt;
        for (int j = 0; j < C; j++) {
            int idx = 0;
            for (char k : arr[i][j]) {
                if (idx < 2) {
                    res.push_back(k);
                    idx++;
                } else {
                    cnt.push_back(k);
                }
            }
        }
        for (char ch : res) cout << ch << " "; cout << endl;
        for (char ch : cnt) cout << ch << " "; cout << endl;
    }
    return 0;
}