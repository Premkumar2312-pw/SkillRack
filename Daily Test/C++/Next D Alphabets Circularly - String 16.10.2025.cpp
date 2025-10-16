#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    cin >> s;
    int len = s.length();
    for(int i=0;i<len;i++){
        if(isdigit(s[i])){
            int d = s[i] - '0', cnt = 0, j = i+1;
            while(cnt < d){
                if(isalpha(s[j%len])){
                    cout << s[j%len];
                    cnt++;
                }
                j++;
            }
            cout << endl;
        }
    }
    return 0;
}