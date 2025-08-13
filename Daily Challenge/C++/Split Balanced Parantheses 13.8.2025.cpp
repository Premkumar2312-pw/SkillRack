#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;int c=0;
    cin>>s;
    for(char ch:s){
        t+=ch;c+=ch=='('?1:-1;
        if(c==0){cout<<t<<"\n";t.clear();}
    }
}