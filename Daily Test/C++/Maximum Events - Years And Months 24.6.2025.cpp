#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> y, m;
    vector<string> mon_order = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    string date;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        getline(cin, date);
        stringstream ss(date);
        string d, mo, yr;
        getline(ss, d, '-');
        getline(ss, mo, '-');
        getline(ss, yr);
        y[yr]++;
        m[mo]++;
    }

    int my = 0, mm = 0;
    for (auto& it : y) my = max(my, it.second);
    for (auto& it : m) mm = max(mm, it.second);

    for (auto& it : y) {
        if (it.second == my) cout << it.first << " ";
    }
    cout << "\n";
    for (string mo : mon_order) {
        if (m[mo] == mm) cout << mo << " ";
    }
}