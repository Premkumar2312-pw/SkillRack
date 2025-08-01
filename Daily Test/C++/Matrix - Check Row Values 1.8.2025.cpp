#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;cin>>r>>c;
    int n=r*c; vector<vector<int>> a(r,vector<int>(c));
    vector<int> f(n+1,0);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++){
        cin>>a[i][j];
        if(a[i][j]>=1 && a[i][j]<=n) f[a[i][j]]=1;
    }
    for(int i=1;i<=n;i++) if(!f[i]){cout<<"No";return 0;}
    for(int i=0;i<r;i++){
        int l=i*c+1,h=(i+1)*c; bool ok=false;
        for(int x:a[i]) if(x>=l && x<=h){ok=true;break;}
        if(!ok){cout<<"No";return 0;}
    }
    cout<<"Yes";
}