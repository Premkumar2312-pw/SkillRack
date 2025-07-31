#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>a(n); for(int&i:a)cin>>i;
    int c=0;
    for(int i=0;i<n;i++){
        bool f=false;
        for(int j=0;j<n;j++)
            if(i!=j && (a[i]%a[j]==0||a[j]%a[i]==0)){ f=true; break; }
        c+=f;
    }
    cout<<c;
}