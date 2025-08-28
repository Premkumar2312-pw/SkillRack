#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s; cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>s;
    for(int i=0;i<n;i++){
        if(a[i].find('*')!=string::npos){
            for(int d=0;d<=9;d++){
                string t=a[i];
                for(char &c:t) if(c=='*') c='0'+d;
                int x=stoi(t),sum=0;
                for(int j=0;j<n;j++){
                    if(j==i) sum+=x;
                    else{
                        string u=a[j];
                        for(char &c:u) if(c=='*') c='0';
                        sum+=stoi(u);
                    }
                }
                if(sum==s){a[i]=t;goto done;}
            }
        }
    }
    done:
    for(string &x:a) cout<<x<<" ";
}