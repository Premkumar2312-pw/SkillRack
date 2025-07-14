#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int r,c;
    cin >> r >> c;
    vector<vector<int>> m(r,vector<int>(c)),u(r,vector<int>(c)),d(r,vector<int>(c)),l(r,vector<int>(c)),ri(r,vector<int>(c));
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>m[i][j];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(m[i][j]==1){
                u[i][j]=1+(i?u[i-1][j]:0);
                l[i][j]=1+(j?l[i][j-1]:0);
            }
    for(int i=r-1;i>=0;i--)
        for(int j=c-1;j>=0;j--)
            if(m[i][j]==1){
                d[i][j]=1+(i<r-1?d[i+1][j]:0);
                ri[i][j]=1+(j<c-1?ri[i][j+1]:0);
            }
    int a=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(m[i][j]==1){
                int x=min({u[i][j],d[i][j],l[i][j],ri[i][j]});
                a=max(a,x);
            }
    cout << (a>=2?a:-1);
}