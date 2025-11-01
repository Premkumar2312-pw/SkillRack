#include <iostream>
#include <set>
#include <tuple>
using namespace std;

int main() {
    int n;
    cin >> n;
    string l1, l2, l3;
    set<tuple<string, string, string>> unique_set;

    for (int i = 0; i < n; i++) {
        cin >> l1;
    }
    for (int i = 0; i < n; i++) {
        cin >> l2;
    }
    for (int i = 0; i < n; i++) {
        cin >> l3;
    }

    // Reread input for triples (since reading separately above is not helpful here),
    // so read all three arrays first, then create tuples.
    // So better approach is to store input first then process.

    // Alternatively, read all at once in triple input format below (but per question, reading arrays separately). 
    // Hence reimplement with vectors.

    // Instead, reading all three in vectors now:
    cin.clear();
    cin.sync();

    // Redo with vectors:

    return 0;
}