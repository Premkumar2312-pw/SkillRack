#include <bits/stdc++.h>
using namespace std;

struct Pair {
    char ch;
    int num;
};

bool cmp(Pair a, Pair b) {
    return a.ch < b.ch;
}

int main() {
    int N;
    cin >> N;
    vector<Pair> arr(N);
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        arr[i].num = stoi(s);
        arr[i].ch = tolower(s.back());
    }
    sort(arr.begin(), arr.end(), cmp);
    bool ok = true;
    for (int i = 0; i < N-1; i++) {
        if (arr[i].num >= arr[i+1].num) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}