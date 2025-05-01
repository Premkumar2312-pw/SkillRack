#include <iostream>
using namespace std;

int main() {
    int n, b, d, y, c = 0;
    cin >> n;
    int birth[n], death[n];

    for(int i = 0; i < n; i++)
        cin >> birth[i] >> death[i];

    cin >> y;

    for(int i = 0; i < n; i++)
        if(birth[i] <= y && y < death[i]) c++;

    cout << c << endl;
    return 0;
}