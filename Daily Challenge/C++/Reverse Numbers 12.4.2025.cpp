#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    vector<int> nums;
    string line, all;
    while (getline(cin, line)) {
        if (!line.empty()) {
            all += line + " ";
        }
    }
    stringstream ss(all);
    int val;
    while (ss >> val) nums.push_back(val);

    if (nums.size() == 0) return 0;

    if (count(all.begin(), all.end(), '\n') < 2) {
        for (int i = nums.size() - 1; i >= 0; --i)
            cout << nums[i] << "\n";
    } else {
        for (int i = nums.size() - 1; i >= 0; --i) {
            cout << nums[i];
            if (i > 0) cout << " ";
        }
        cout << endl;
    }

    return 0;
}