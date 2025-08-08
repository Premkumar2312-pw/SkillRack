#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string>s;string t;int k;
    while(cin>>t){s.push_back(t);if(cin.peek()=='\n')break;}
    cin>>k;--k;string w=s[k];int l=w.size(),m;
    if(l%2)m=(l-1)/2,w=w.substr(m)+string(w.rbegin(),w.rbegin()+m+1);
    else m=l/2-1,w=w.substr(m+1)+string(w.rbegin(),w.rbegin()+m+1);
    s[k]=w;for(int i=0;i<s.size();i++)cout<<s[i]<<(i+1<s.size()?" ":"");
}