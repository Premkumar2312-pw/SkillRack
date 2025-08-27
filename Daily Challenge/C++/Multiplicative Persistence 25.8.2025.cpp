#include <iostream>
#include <string>
using namespace std;
int main() {
    string n, l;
    cin >> n;
    l = n;
    int i = 0, s = 1, c = 0;
    while (l.length() > 1) {
        if (l.length() == 1) break;
        if (i == l.length() - 1) {
            c++;
            s = l[i] - '0';
            i = 0;
            l = to_string(s);
            s = 1;
        } else {
            s *= l[i] - '0';
            i++;
        }
    }
    cout << c << endl;
    return 0;
}
