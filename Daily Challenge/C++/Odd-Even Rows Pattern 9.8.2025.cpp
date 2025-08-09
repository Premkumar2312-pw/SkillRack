#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,s;
    cin>>n;
    for(x=1;x<=n;x++){
        s=x*x-(x-1)*2;
        for(int i=s;i<=x*x;i+=2) cout<<i<<" ";
        cout<<"\n";
    }
}