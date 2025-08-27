#include <iostream>
#include <vector>
using namespace std;
int main() {
    string S;
    cin >> S;
    vector<char> st;
    for (char i : S) {
        if (isalpha(i)) {
            st.push_back(i);
        } else {
            int times = i - '0';
            for (int j = 0; j < times; j++)
                cout << st.front();
            st.erase(st.begin());
        }
    }
    return 0;
}
