#include <iostream>
#include <vector>
#include <bitset>
#include <string>

using namespace std;

string to_binary(int n) {
    string s = bitset<32>(n).to_string();
    // Remove leading zeros
    size_t pos = s.find('1');
    if (pos != string::npos) {
        return s.substr(pos);
    }
    return "0";
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        string bin = to_binary(arr[i]);
        if (bin.length() < 3) {
            // Not enough length for slicing as in Python, print as is
            cout << arr[i] << " ";
            continue;
        }
        // Python slicing: bin[i][3:] + bin[i][2]
        string newbin = "";
        if (bin.length() > 3)
            newbin = bin.substr(3);
        newbin += bin[2];

        // Convert newbin binary string to int
        int val = 0;
        for (char c : newbin) {
            val = val * 2 + (c - '0');
        }
        cout << val << " ";
    }
    return 0;
}