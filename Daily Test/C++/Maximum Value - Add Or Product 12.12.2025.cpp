#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int x : arr) {
        int sum = 0, prod = 1;
        int temp = x;

        while (temp > 0) {
            int d = temp % 10;
            sum += d;
            prod *= d;
            temp /= 10;
        }

        cout << max(sum, prod) << " ";
    }
    return 0;
}