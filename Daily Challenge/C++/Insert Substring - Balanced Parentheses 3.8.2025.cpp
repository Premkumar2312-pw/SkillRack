#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;cin>>s1>>s2;
    int d=0,m=0,i=0;
    for(int j=0;j<s1.size();j++){
        d += s1[j]=='(' ? 1 : -1;
        if(d>m){ m=d; i=j; }
    }
    cout<<s1.substr(0,i+1)+s2+s1.substr(i+1);
}