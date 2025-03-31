#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool is_step_number(string num_str) {
    for (size_t i = 0; i < num_str.length() - 1; i++) {
        if (abs(num_str[i] - num_str[i + 1]) != 1) {
            return false;
        }
    }
    return true;
}

string convert_to_base(int n, int base) {
    string res = "";
    while (n > 0) {
        res = to_string(n % base) + res;
        n /= base;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    bool found = false;

    for (int base = 2; base <= 10; base++) {
        string base_repr = convert_to_base(n, base);
        if (is_step_number(base_repr)) {
            cout << base_repr << endl;
            found = true;
        }
    }
    if (!found) cout << -1 << endl;

    return 0;
}
