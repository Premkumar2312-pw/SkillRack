#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        arr[i] = i + 1;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;

        int last = arr[n - 1];
        for(int j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];
        arr[0] = last;
    }
}