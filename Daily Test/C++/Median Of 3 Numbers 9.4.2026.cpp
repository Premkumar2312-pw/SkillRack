#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    vector<int> l={a,b,c};
    sort(l.begin(),l.end());

    int d=1;
    int e=l[d];

    if(l[0]!=e && l[2]!=e) cout<<e;
    else cout<<-1;
}