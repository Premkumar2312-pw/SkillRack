#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<string>> c = {
        {"*", "11", "12", "1", "*"},
        {"10", "*", "*", "*", "2"},
        {"9", "*", "*", "*", "3"},
        {"8", "*", "*", "*", "4"},
        {"*", "7", "6", "5", "*"}
    };
    int n; cin >> n;
    vector<string> a(n), b(n);
    for(int i=0;i<n;i++) cin >> a[i] >> b[i];

    for(int k=0;k<n;k++) {
        for(int i=0;i<5;i++) {
            for(int j=0;j<5;j++) {
                if(c[i][j]==a[k]) c[i][j]=b[k];
                else if(c[i][j]==b[k]) c[i][j]=a[k];
            }
        }
    }

    for(auto &row:c){
        for(auto &x:row) cout << x << " ";
        cout << "\n";
    }
}