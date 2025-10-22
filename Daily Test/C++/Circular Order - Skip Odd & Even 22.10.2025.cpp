#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> reg(n);
    for (int i = 0; i < n; i++) cin >> reg[i];
    cin >> q;
    vector<int> marks(q);
    for (int i = 0; i < q; i++) cin >> marks[i];

    vector<int> res(n, 0);
    vector<int> order;

    for (int i = 0; i < n; i++) order.push_back(i);
    for (int i = 0; i < n; i++) if (reg[i] % 2 == 0) order.push_back(i);
    for (int i = 0; i < n; i++) if (reg[i] % 2 != 0) order.push_back(i);

    int order_len = order.size();

    for (int i = 0; i < q; i++) {
        res[order[i % order_len]] += marks[i];
    }

    for (int val : res) cout << val << " ";
    cout << "
";

    return 0;
}