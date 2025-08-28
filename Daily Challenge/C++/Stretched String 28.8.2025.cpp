#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int i=0,j=0,n=s1.size(),m=s2.size(),k=-1;
    bool v=true;
    while(i<n && j<m){
        if(s1[i]!=s2[j]){v=false;break;}
        int c2=0; while(j<m && s2[j]==s1[i]){c2++;j++;}
        int c1=1; while(i+1<n && s1[i+1]==s1[i]){c1++;i++;}
        if(c2%c1){v=false;break;}
        int f=c2/c1;
        if(k==-1)k=f; else if(k!=f){v=false;break;}
        i++;
    }
    cout<<(v && i==n && j==m ? "Yes" : "No");
}