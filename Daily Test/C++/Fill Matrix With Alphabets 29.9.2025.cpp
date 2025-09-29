#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    string m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> m[i][j];
        }
    }
    char ch; cin >> ch;
    int f = ch, b = ch;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(m[i][j]=="1"){
                cout << char(f) << " ";
                if(islower(f))
                    f = 'a' + (f-'a'+1)%26;
                else
                    f = 'A' + (f-'A'+1)%26;
            } else {
                cout << char(b) << " ";
                if(islower(b))
                    b = 'a' + (b-'a'-1+26)%26;
                else
                    b = 'A' + (b-'A'-1+26)%26;
            }
        }
        cout << "\n";
    }
    return 0;
}