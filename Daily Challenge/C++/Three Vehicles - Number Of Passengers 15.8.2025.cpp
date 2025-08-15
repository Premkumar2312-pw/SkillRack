#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a; int x; while(cin>>x) a.push_back(x);
    vector<int>res;
    int n=a.size();
    for(int i=1;i<=3;i++){
        vector<int> idx(i);
        function<void(int,int)> dfs=[&](int s,int c){
            if(c==i){int sum=0; for(int id:idx) sum+=a[id]; res.push_back(sum); return;}
            for(int j=s;j<n;j++){idx[c]=j; dfs(j+1,c+1);}
        };
        dfs(0,0);
    }
    sort(res.begin(),res.end());
    for(int v:res) cout<<v<<" ";
}