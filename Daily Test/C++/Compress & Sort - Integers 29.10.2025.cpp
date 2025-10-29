#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l1;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vector<int> l2;

        for (int j = 0; j < (int)s.size(); j++) {
            string temp = s.substr(0, j) + s.substr(j + 1);
            l2.push_back(stoi(temp));
        }

        l1.push_back(*min_element(l2.begin(), l2.end()));
    }

    sort(l1.begin(), l1.end());

    for (int val : l1) cout << val << " ";
    cout << endl;

    return 0;
}