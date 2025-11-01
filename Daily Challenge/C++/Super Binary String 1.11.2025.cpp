#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    int count0 = 0, count1 = 0;
    for (char ch : n) {
        if (ch == '0') count0++;
        else if (ch == '1') count1++;
    }
    for (char ch : n) {
        if (ch == '1') a++;
        else b++;
        if (a < b) {
            c = 1;
            break;
        }
    }
    if (count0 == count1 && c == 0)
        cout << "Yes
";
    else
        cout << "No
";

    return 0;
}