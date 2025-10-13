#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> val(N), copy(N);
    for (int i = 0; i < N; i++) {
        cin >> val[i];
        copy[i] = val[i];
    }
    sort(copy.begin(), copy.end());
    for (int i = 0; i < N-1; i++) {
        int idx1 = find(val.begin(), val.end(), copy[i]) - val.begin();
        int idx2 = find(val.begin(), val.end(), copy[i+1]) - val.begin();
        if (idx1 < idx2) {
            for (int j = idx1; j <= idx2; j++)
                cout << val[j] << " ";
        } else {
            for (int j = idx1; j >= idx2; j--)
                cout << val[j] << " ";
        }
    }
    cout << endl;
    return 0;
}