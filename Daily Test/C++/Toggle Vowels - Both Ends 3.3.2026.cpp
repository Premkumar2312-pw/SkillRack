#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}

int main() {
    string s;
    cin >> s;

    while(true) {
        int first = -1, last = -1;

        for(int i = 0; i < s.length(); i++) {
            if(isVowel(s[i])) {
                if(first == -1)
                    first = i;
                last = i;
            }
        }

        if(first == -1)
            break;

        s[first] = toupper(s[first]);
        if(first != last)
            s[last] = toupper(s[last]);
    }

    cout << s;
}