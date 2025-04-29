#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}

int main() {
    string s;
    cin >> s;
    vector<int> idx;

    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i]))
            idx.push_back(i);
    }

    for (int i = 0; i + 1 < idx.size(); i += 2)
        swap(s[idx[i]], s[idx[i + 1]]);

    cout << s << endl;
    return 0;
}