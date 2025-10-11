#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> val(N);
    map<char, int> b;
    for (int i = 0; i < N; i++) {
        cin >> val[i];
        b[val[i][0]]++;
        b[val[i].back()]++;
    }
    vector<pair<char, int>> vec(b.begin(), b.end());
    sort(vec.begin(), vec.end(), [](auto &a, auto &b){ return a.second > b.second; });
    char key = vec[0].first;
    for (const auto &s : val) {
        if (s[0] == key)
            cout << s << endl;
        else
            cout << string(s.rbegin(), s.rend()) << endl;
    }
    return 0;
}