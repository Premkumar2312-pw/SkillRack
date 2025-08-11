#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p,x,y;
    cin>>n>>p;
    while(n--){
        cin>>x>>y;
        if(p==x)p=y;
        else if(p==y)p=x;
    }
    cout<<p;
}