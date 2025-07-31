#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int x=1;
    for(int i=1;i<n;i++){
        cout<<string(i-1,'*')<<x++<<"\n";
    }
    for(int i=x+n-1;i>=x;i--) cout<<i;
    cout<<"\n"; x+=n;
    for(int i=1;i<n;i++){
        cout<<string(i,'*')<<x++<<"\n";
    }
}