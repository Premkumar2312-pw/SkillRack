#include <bits/stdc++.h>
using namespace std;

int main(){
    string line; getline(cin,line);
    stringstream ss(line);

    int res; ss>>res;
    string op;
    int val;

    while(ss>>op>>val){
        if(op=="plus") res+=val;
        else if(op=="minus") res-=val;
        else if(op=="multiply") res*=val;
        else if(op=="divide") res/=val;
    }

    cout<<res;
}