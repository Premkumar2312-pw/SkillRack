#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> l(n);
    vector<int> r;
    for(int i = 0; i < n; i++) cin >> l[i];
    for(auto& i : l) {
        char minc = *min_element(i.begin(), i.end());
        char maxc = *max_element(i.begin(), i.end());
        int a = minc - '0', b = maxc - '0';
        string c = "";
        if(i[0] < i[i.size()-1]) {
            for(int j = a; j <= b; j++) c += to_string(j);
        } else {
            for(int j = b; j >= a; j--) c += to_string(j);
        }
        r.push_back(stoi(c));
    }
    sort(r.begin(), r.end());
    for(auto x : r) cout << x << " ";
    return 0;
}