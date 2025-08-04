#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int n=s.size(); set<string> u;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            for(int k=j+1;k<n;k++)
                for(int l=k+1;l<n;l++)
                    if(s[i]==s[j] && s[k]==s[l] && s[k]-'0'==s[i]-'0'+1)
                        u.insert({s[i],s[j],s[k],s[l]});
    cout<<u.size();
}