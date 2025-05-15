#include <iostream>
#include <string>
using namespace std;

int main() {
    string S1, S2;
    getline(cin, S1);
    getline(cin, S2);

    int mlen = max(S1.length(), S2.length());

    for (int i = 0; i < mlen; i++) {
        char c1 = (i < S1.size()) ? S1[i] : ' ';
        char c2 = (i < S2.size()) ? S2[i] : ' ';

        if (c1 == ' ' && c2 == ' ') cout << "**" << endl;
        else if (c1 == ' ') cout << c2 << "*" << endl;
        else if (c2 == ' ') cout << c1 << "*" << endl;
        else cout << c1 << c2 << endl;
    }

    return 0;
}