#include <bits/stdc++.h>
using namespace std;
int main(){
    string n,a; int q,x,y;
    cin>>n>>q; a=n;
    while(q--){
        cin>>x>>y;
        swap(a[x-1],a[y-1]);
    }
    if(a==n)cout<<"YES";
    else cout<<stoi(a)*2;
}