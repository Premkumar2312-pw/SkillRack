#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,j;cin>>n;
    vector<int>a(n);
    for(i=0;i<n;i++)cin>>a[i];
    cin>>k;
    for(i=0;i<k;i++)for(j=k;j<n;j++)a[j]+=a[j]%a[i];
    for(int x:a)cout<<x<<" ";
}