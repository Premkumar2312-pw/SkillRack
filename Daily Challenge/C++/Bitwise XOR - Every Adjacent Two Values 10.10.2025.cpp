#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; ++i) cin >> arr[i];
    while(arr.size() > 1) {
        vector<int> res;
        for(int i = 0; i < arr.size()-1; ++i)
            res.push_back(arr[i]^arr[i+1]);
        for(int x : res)
            cout << x << " ";
        cout << endl;
        arr = res;
    }
    return 0;
}