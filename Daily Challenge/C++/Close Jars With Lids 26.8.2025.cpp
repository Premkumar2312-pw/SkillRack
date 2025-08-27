#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> val(N), jar, lid;
    for (int i = 0; i < N; ++i) cin >> val[i];
    for (int i : val) {
        if (i % 2 == 0) jar.push_back(i);
        else lid.push_back(i);
    }
    int cnt = 0;
    for (int i : jar) {
        for (auto it = lid.begin(); it != lid.end(); ++it) {
            if (*it == i + 1) {
                cnt++;
                lid.erase(it);
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
