#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string n;
    cin >> n;
    vector<int> c;
    int s = 0, maxc = 0;
    for(char ch : n) {
        int v = ch-'0'; c.push_back(v); if(v>maxc) maxc=v;
    }
    vector<string> m(maxc, "");
    for(int i=0;i<c.size();i++) {
        if(i>0) s+=c[i-1];
        m[c[i]-1] += string(s-m[c[i]-1].size(), '-') + string(c[i], '*');
    }
    for(int i=maxc-1;i>=0;i--)
        cout << m[i] + string(s-m[i].size(), '-') << endl;
    return 0;
}