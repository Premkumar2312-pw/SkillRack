#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; vector<string> subs;
    if(!(cin>>s)) return 0;
    string t; while(cin>>t) subs.push_back(t);
    int n=subs[0].size();
    vector<string> parts;
    for(int i=0;i<s.size();i+=n) parts.push_back(s.substr(i,n));
    for(auto &sub:subs)
        for(int i=0;i<parts.size();i++)
            if(parts[i]==sub){ cout<<i+1<<"\n"; break; }
}