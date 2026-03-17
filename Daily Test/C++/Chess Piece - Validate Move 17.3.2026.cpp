#include <iostream>
#include <vector>
using namespace std;

int main() {
    char a;
    string b, c;
    cin >> a >> b >> c;

    int r = b[1] - '0';
    int col = b[0] - 'a';

    int tr = c[1] - '0';
    int tc = c[0] - 'a';

    vector<pair<int,int>> moves;

    if(a == 'R'){
        for(int i=0;i<8;i++){
            moves.push_back({r,i});
            moves.push_back({i,col});
        }
    }
    else if(a == 'B'){
        for(int i=1;i<8;i++){
            if(r+i<8 && col+i<8) moves.push_back({r+i,col+i});
            if(r+i<8 && col-i>=0) moves.push_back({r+i,col-i});
            if(r-i>=0 && col+i<8) moves.push_back({r-i,col+i});
            if(r-i>=0 && col-i>=0) moves.push_back({r-i,col-i});
        }
    }
    else{
        int dr[] = {2,2,-2,-2,1,1,-1,-1};
        int dc[] = {1,-1,1,-1,2,-2,2,-2};

        for(int i=0;i<8;i++){
            int nr=r+dr[i], nc=col+dc[i];
            if(nr>=0 && nr<8 && nc>=0 && nc<8)
                moves.push_back({nr,nc});
        }
    }

    bool found=false;
    for(auto m:moves){
        if(m.first==tr && m.second==tc){
            found=true;
            break;
        }
    }

    cout<<(found?"Yes":"No");
}