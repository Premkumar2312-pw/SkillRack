#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h=0,t=0; cin>>n;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    char f; cin>>f;
    for(int x:a){
        if(x%2) f=(f=='H'?'T':'H');
        if(f=='H') h++; else t++;
    }
    cout<<h<<" "<<t;
}