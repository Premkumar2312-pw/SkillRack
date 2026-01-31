#include <bits/stdc++.h>
using namespace std;

int main() {
    string file1, file2;
    getline(cin, file1);
    getline(cin, file2);

    ifstream f1(file1), f2(file2);

    int n;
    f1 >> n;

    map<int, string> nameMap, desMap;

    for (int i = 0; i < n; i++) {
        int id;
        string name;
        f1 >> id >> name;
        nameMap[id] = name;
    }

    int dummy;
    f2 >> dummy; // skip count

    for (int i = 0; i < n; i++) {
        int id;
        string des;
        f2 >> id >> des;
        desMap[id] = des;
    }

    for (auto &x : nameMap) {
        cout << x.first << " " << x.second << " " << desMap[x.first] << "\n";
    }
}