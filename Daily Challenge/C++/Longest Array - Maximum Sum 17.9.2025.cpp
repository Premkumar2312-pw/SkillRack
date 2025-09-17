#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m = 0, j = 0;
    cin >> n;
    vector<vector<int>> l(n);
    for(int i = 0; i < n; i++) {
        int tmp, sumj = 0, sumi = 0;
        cin >> tmp;
        l[i].resize(tmp);
        for(int x = 0; x < tmp; x++) cin >> l[i][x];
        if(m < tmp) { m = tmp; j = i; }
        else if(m == tmp) {
            for(int k = 0; k < l[j].size(); k++) sumj += l[j][k];
            for(int k = 0; k < l[i].size(); k++) sumi += l[i][k];
            if(sumj < sumi) j = i;
        }
    }
    int res = 0;
    for(int k = 0; k < l[j].size(); k++) res += l[j][k];
    cout << res << endl;
    return 0;
}