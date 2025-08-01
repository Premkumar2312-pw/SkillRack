#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    vector<int> ans; int stars=0;
    vector<int> idx;
    for(int i=0;i<s.size();i++){
        if(s[i]=='#'){
            for(int j=i-1;j>=0 && s[j]!='#';j--)
                if(s[j]=='L') ans.push_back(stars);
            stars=0;
        } else if(s[i]=='*') stars++;
    }
    for(int j=s.size()-1;j>=0 && s[j]!='#';j--)
        if(s[j]=='L') ans.push_back(stars);
    for(int x:ans) cout<<x<<" ";
}