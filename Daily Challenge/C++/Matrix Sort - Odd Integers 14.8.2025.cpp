#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;cin>>r>>c;
    vector<vector<int>> a(r,vector<int>(c));
    vector<int> o;
    for(int i=0;i<r;i++)for(int j=0;j<c;j++){cin>>a[i][j];if(a[i][j]%2)o.push_back(a[i][j]);}
    sort(o.begin(),o.end());
    int k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]%2) cout<<o[k++]<<" "; else cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}