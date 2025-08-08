#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100],f=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k=j+1;k<n;k++)
                if(a[j]-a[i]==a[k]-a[j]){cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<"\n";f=1;}
    if(!f)cout<<-1;
}