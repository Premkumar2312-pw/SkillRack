#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;cin>>n>>x;x%=4;
    vector<vector<int>> m(n,vector<int>(n)),t(n,vector<int>(n));
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)m[i][j]=i*n+j+1;
    while(x--){
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)t[i][j]=m[n-j-1][i];
        m=t;
    }
    int a=0,b=0,c=0,d=0;
    for(int j=0;j<n;j++)a+=m[0][j];
    for(int i=0;i<n;i++)b+=m[i][n-1];
    for(int j=0;j<n;j++)c+=m[n-1][j];
    for(int i=0;i<n;i++)d+=m[i][0];
    char w='A';int mx=a;
    if(b>mx){mx=b;w='B';}
    if(c>mx){mx=c;w='C';}
    if(d>mx){mx=d;w='D';}
    cout<<w<<" "<<mx;
}