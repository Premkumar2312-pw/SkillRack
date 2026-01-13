#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int&i:a) cin>>i;

    int days=0;
    while(true){
        vector<int> nxt;
        nxt.push_back(a[0]);
        bool removed=false;

        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]) removed=true;
            else nxt.push_back(a[i]);
        }

        if(!removed) break;
        days++;
        a=nxt;
        n=a.size();
    }
    cout<<days;
}