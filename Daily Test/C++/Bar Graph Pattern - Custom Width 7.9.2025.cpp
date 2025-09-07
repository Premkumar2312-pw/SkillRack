#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    vector<int> height(N);
    for (int i = 0; i < N; i++) cin >> height[i];
    cin >> X;

    int maxH = *max_element(height.begin(), height.end());
    vector<string> tot;

    for (int i = 0; i < N; i++) {
        for (int c = 0; c < X; c++) {
            string bar(maxH - height[i], '.');
            bar += string(height[i], '*');
            tot.push_back(bar);
        }
    }

    for (int i = 0; i < maxH; i++) {
        for (auto &word : tot) {
            cout << word[i] << " ";
        }
        cout << "\n";
    }
}