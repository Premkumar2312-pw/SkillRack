#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;

        int digits = 0;
        int temp = num;

        if(temp == 0) digits = 1;

        while(temp > 0) {
            digits++;
            temp /= 10;
        }

        if(digits % 2 == 0) {
            cout << num << " ";
        }
    }

    return 0;
}