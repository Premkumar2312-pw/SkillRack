#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    set<char> st(s.begin(), s.end());
    if(st.size()!=2){ cout<<"NO"; return 0; }
    int n=s.size();
    for(int i=1;i<=(n-1)/2;i++){
        if(s.substr(0,i)==s.substr(n-i) &&
           set<char>(s.begin(), s.begin()+i)==set<char>({s[0]}) &&
           set<char>(s.begin()+i, s.end()-i)==set<char>({s[i]}) &&
           s[i]!=s[0]){
            cout<<"YES"; return 0;
        }
    }
    cout<<"NO";
}