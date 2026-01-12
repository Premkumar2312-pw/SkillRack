#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2; getline(cin,s1); getline(cin,s2);
    vector<string> L,R;
    string w;
    stringstream a(s1), b(s2);

    while(a>>w) L.push_back(w);
    while(b>>w) R.push_back(w);

    vector<bool> used(R.size(),false);

    for(auto &x:L){
        for(int i=0;i<R.size();i++){
            if(!used[i] && x.back()==R[i][0]){
                cout<<x<<R[i].substr(1)<<" ";
                used[i]=true;
                break;
            }
        }
    }
}