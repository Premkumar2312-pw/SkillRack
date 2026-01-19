#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> A(r, vector<int>(c)), B(r, vector<int>(c));
    for(auto &row:A) for(int &x:row) cin>>x;
    for(auto &row:B) for(int &x:row) cin>>x;

    int match=-1, kfirst=0;

    for(int k=0;k<c;k++){
        bool ok=true;
        for(int i=0;i<r;i++) if(A[i][k]!=B[i][0]) ok=false;
        if(ok){ match=k; kfirst=0; break; }
    }

    for(int k=0;k<c;k++){
        bool ok=true;
        for(int i=0;i<r;i++) if(A[i][k]!=B[i][c-1]) ok=false;
        if(ok){ match=k; kfirst=c-1; break; }
    }

    int s = (kfirst==0)?match:match-(c-1);
    int mn=min(0,s), mx=max(c-1,s+c-1);
    int w=mx-mn+1;

    vector<vector<int>> res(r, vector<int>(w,0));

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            res[i][-mn+j]+=A[i][j];
            res[i][s-mn+j]+=B[i][j];
        }

    for(auto &row:res){
        for(int x:row) cout<<x<<" ";
        cout<<"\n";
    }
}