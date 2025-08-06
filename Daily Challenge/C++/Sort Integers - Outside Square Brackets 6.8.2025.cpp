#include <bits/stdc++.h>
using namespace std;
int main(){
    string x; vector<string>s;
    while(cin>>x) s.push_back(x);
    vector<int>o; int f=0;
    for(string &t:s){
        if(t.find('[')!=string::npos && t.find(']')==string::npos) f=1;
        if(!f && t[0]!='[') o.push_back(stoi(t));
        if(t.find(']')!=string::npos && t.find('[')==string::npos) f=0;
    }
    sort(o.begin(),o.end());
    f=0; int i=0;
    for(string &t:s){
        if(t.find('[')!=string::npos && t.find(']')==string::npos) f=1,cout<<t<<" ";
        else if(t.find(']')!=string::npos && t.find('[')==string::npos) f=0,cout<<t<<" ";
        else if(!f && t[0]!='[') cout<<o[i++]<<" ";
        else cout<<t<<" ";
    }
}