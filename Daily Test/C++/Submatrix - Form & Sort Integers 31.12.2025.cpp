#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> m(r,vector<int>(c));
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>m[i][j];

    vector<int> l;

    for(int i=0;i<r;i+=3){
        for(int j=0;j<c;j+=3){
            string a="",b="",d="";
            for(int y=0;y<3;y++){
                string row="";
                for(int n=0;n<3;n++){
                    row+=to_string(m[i+y][j+n]);
                    if(n==0) a+=to_string(m[i+y][j+n]);
                    if(n==1) b+=to_string(m[i+y][j+n]);
                    if(n==2) d+=to_string(m[i+y][j+n]);
                }
                l.push_back(stoi(row));
            }
            l.push_back(stoi(a));
            l.push_back(stoi(b));
            l.push_back(stoi(d));
            l.push_back(m[i][j]+m[i+1][j+1]+m[i+2][j+2]);
            l.push_back(m[i][j+2]+m[i+1][j+1]+m[i+2][j]);
        }
    }
    sort(l.begin(),l.end());
    for(int x:l) cout<<x<<" ";
}