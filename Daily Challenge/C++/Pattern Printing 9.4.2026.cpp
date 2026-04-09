#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> l;

    for(int i=1;i<=n;i++)
        l.push_back(string(i, char('0'+i)));

    for(auto &x:l) cout<<x<<"\n";
    for(int i=l.size()-1;i>=0;i--) cout<<l[i]<<"\n";
}