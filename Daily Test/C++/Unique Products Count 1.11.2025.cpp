#include <iostream>
#include <set>
#include <tuple>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> l1(n), l2(n), l3(n);
    for (int i = 0; i < n; i++) cin >> l1[i];
    for (int i = 0; i < n; i++) cin >> l2[i];
    for (int i = 0; i < n; i++) cin >> l3[i];

    set<tuple<string, string, string>> unique_set;
    for (int i = 0; i < n; i++) {
        unique_set.insert(make_tuple(l1[i], l2[i], l3[i]));
    }

    cout << unique_set.size() << endl;
    return 0;
}