#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int &x:a)cin>>x;
    int start=-1,minLen=n+1,lastStart=-1,lastLen=0;
    for(int i=0;i<=n;i++){
        int val=(i<n?a[i]:0);
        if(val>=100){
            if(start==-1)start=i;
        } else if(start!=-1){
            int len=i-start;
            if(len<minLen){minLen=len;lastStart=start;lastLen=len;}
            else if(len==minLen){lastStart=start;lastLen=len;}
            start=-1;
        }
    }
    double sum=0;
    for(int i=lastStart;i<lastStart+lastLen;i++) sum+=a[i];
    cout<<fixed<<setprecision(2)<<sum/lastLen;
}