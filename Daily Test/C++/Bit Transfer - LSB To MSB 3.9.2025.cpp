#include <bits/stdc++.h>
using namespace std;

string toBinary(int x) {
    string s = "";
    while(x>0) { s = char('0'+(x%2)) + s; x/=2; }
    return s==""?"0":s;
}

int main() {
    int N; cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    
    vector<string> bin(N);
    for(int i=0;i<N;i++) bin[i] = toBinary(arr[i]);
    
    string extra = bin[N-1].back() + bin[0].substr(0, bin[0].size()-1);
    cout << stoi(extra, nullptr, 2) << " ";
    
    for(int i=1;i<N;i++) {
        string tmp = bin[i-1].back() + bin[i].substr(0, bin[i].size()-1);
        cout << stoi(tmp, nullptr, 2) << " ";
    }
}