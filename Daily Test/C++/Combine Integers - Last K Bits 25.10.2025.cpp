#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) cin >> nums[i];
    int k;
    cin >> k;
    int mask = (1 << k) - 1;
    int sum = nums[0];
    int currLast = nums[0] & mask;
    for (int index = 1; index < N; index++) {
        if (currLast == (nums[index] & mask)) {
            sum += nums[index];
        } else {
            cout << sum << " ";
            sum = nums[index];
            currLast = nums[index] & mask;
        }
    }
    cout << sum << endl;
    return 0;
}