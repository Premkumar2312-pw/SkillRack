#include <bits/stdc++.h>
using namespace std;
int main() {
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    string s; cin >> s;
    int sec = 0;
    int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,0},{1,-1},{1,1}};
    for (int k = 1; k < s.size(); k++) {
        int di,dj,x,y;
        for (int i=0;i<3;i++) {
            for (int j=0;j<3;j++) {
                if (m[i][j]==s[k]-'0'){di=i;dj=j;}
                if (m[i][j]==s[k-1]-'0'){x=i;y=j;}
            }
        }
        bool f = true;
        if (di==x && dj==y) continue;
        for (auto &d: dir) {
            if (di+d[0]==x && dj+d[1]==y){sec++;f=false;}
        }
        if (f) sec+=2;
    }
    cout << sec;
}