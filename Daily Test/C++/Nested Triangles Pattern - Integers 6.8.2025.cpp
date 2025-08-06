#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0;i<=n;i++){
        cout<<"*";
        for(int j=1;j<=i;j++) cout<<j;
        for(int j=i-1;j>0;j--) cout<<j;
        if(i) cout<<"*";
        cout<<"\n";
    }
    for(int i=n-1;i>=0;i--){
        cout<<"*";
        for(int j=1;j<=i;j++) cout<<j;
        for(int j=i-1;j>0;j--) cout<<j;
        if(i) cout<<"*";
        cout<<"\n";
    }
}