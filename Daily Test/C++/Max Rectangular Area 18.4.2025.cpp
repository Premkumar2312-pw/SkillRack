#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int l, b, h, v;
    cin >> l >> b;

    cin >> h;
    vector<int> hc(h + 2);
    hc[0] = 0;
    for (int i = 1; i <= h; ++i)
        cin >> hc[i];
    hc[h + 1] = l;
    sort(hc.begin(), hc.end());

    cin >> v;
    vector<int> vc(v + 2);
    vc[0] = 0;
    for (int i = 1; i <= v; ++i)
        cin >> vc[i];
    vc[v + 1] = b;
    sort(vc.begin(), vc.end());

    int mh = 0, mw = 0;
    for (int i = 0; i < h + 1; ++i)
        mh = max(mh, hc[i + 1] - hc[i]);
    for (int i = 0; i < v + 1; ++i)
        mw = max(mw, vc[i + 1] - vc[i]);

    cout << mh * mw << endl;
    return 0;
}