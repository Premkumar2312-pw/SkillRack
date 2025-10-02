#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n.size(); ++i) {
        string temp = n;
        temp[i] = ((n[i] - '0') * (n[i] - '0')) + '0';
        sum += stoi(temp);
    }
    cout << sum << endl;
    return 0;
}