#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> l(n);
    for(int i=0; i<n; i++) {
        cin >> l[i];
    }
    reverse(l.begin(), l.end());
    int cols = l[0].size();
    for(int i=0; i<cols; i++) {
        int b=0, c=0, f=0;
        for(int j=0; j<n; j++) {
            if(l[j][i]=='#' && f==0) { b=j; f=1; c=j; }
            else if(f==1 && l[j][i]=='#') c=j;
        }
        cout << (b+1) << " " << (c+1) << endl;
    }
    return 0;
}