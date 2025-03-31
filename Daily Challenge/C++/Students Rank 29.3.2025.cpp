#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int numberOfElements, indexPosition;
    cin >> numberOfElements;

    vector<int> marks(numberOfElements);
    for (int i = 0; i < numberOfElements; i++) {
        cin >> marks[i];
    }
    cin >> indexPosition;

    set<int, greater<int>> uniqueMarks(marks.begin(), marks.end());

    map<int, int> rankMap;
    int rank = 1;
    for (int mark : uniqueMarks) {
        rankMap[mark] = rank++;
    }

    cout << rankMap[marks[indexPosition - 1]] << endl;
    return 0;
}
