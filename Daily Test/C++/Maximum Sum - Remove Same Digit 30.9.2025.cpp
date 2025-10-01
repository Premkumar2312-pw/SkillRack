#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    vector<string> arr(N);
    for(int i=0;i<N;i++) cin >> arr[i];

    int originalSum=0;
    for(auto &s:arr) originalSum+=stoi(s);

    int ans=INT_MIN;
    for(int d=0; d<10; d++){
        int s=0;
        for(auto &str:arr){
            string tmp="";
            for(char c: str){
                if(c!='0'+d) tmp+=c;
            }
            if(tmp=="") tmp="0";
            s+=stoi(tmp);
        }
        if(s!=originalSum) ans=max(ans,s);
    }
    cout << ans << "\n";
}
