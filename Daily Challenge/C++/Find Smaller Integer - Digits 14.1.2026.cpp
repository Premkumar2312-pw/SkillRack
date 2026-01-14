#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    long long k;
    cin >> k;
    string kstr = to_string(k);

    long long sum = 0;
    for(char d : kstr) {
        long long minVal = LLONG_MAX;
        bool found = false;

        for(long long num : arr) {
            string s = to_string(num);
            if(s.find(d) != string::npos) {
                minVal = min(minVal, num);
                found = true;
            }
        }

        if(found) sum += minVal;
    }

    cout << sum << endl;
    return 0;
}