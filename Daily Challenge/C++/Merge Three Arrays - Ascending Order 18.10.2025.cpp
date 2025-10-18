#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Pair {
    string key;
    int value;
};

bool cmp(Pair a, Pair b) {
    return a.value < b.value;
}

int main() {
    int A, B, C;
    cin >> A;
    vector<int> val1(A);
    for (int &v : val1) cin >> v;
    cin >> B;
    vector<int> val2(B);
    for (int &v : val2) cin >> v;
    cin >> C;
    vector<int> val3(C);
    for (int &v : val3) cin >> v;
    vector<Pair> d;

    for (int i = 0; i < A; i++)
        d.push_back({ "a" + to_string(i), val1[i] });
    for (int i = 0; i < B; i++)
        d.push_back({ "b" + to_string(i), val2[i] });
    for (int i = 0; i < C; i++)
        d.push_back({ "c" + to_string(i), val3[i] });

    sort(d.begin(), d.end(), cmp);
    for (auto &p : d) cout << p.key << " ";
    return 0;
}