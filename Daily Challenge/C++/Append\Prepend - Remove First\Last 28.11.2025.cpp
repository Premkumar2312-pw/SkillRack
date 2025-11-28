#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> l(n);
    for (int i = 0; i < n; i++) cin >> l[i];

    string s = "";
    for (string i : l) {
        int len = i.size();
        if (i[0] == '+') {
            s += i.substr(1);
        } else if (i[0] == '-') {
            string sub = i.substr(1);
            size_t pos = s.find(sub);
            if (pos != string::npos) s.erase(pos, 1);
        } else if (i[len-1] == '+') {
            string sub = i.substr(0, len-1);
            s = sub + s;
        } else if (i[len-1] == '-') {
            string sub = i.substr(0, len-1);
            size_t pos = s.find(sub);
            if (pos != string::npos) s.erase(pos, 1);
        }
    }
    if (!s.empty()) cout << s << "
";
    else cout << -1 << "
";
    return 0;
}