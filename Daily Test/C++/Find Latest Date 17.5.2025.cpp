#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int m, n, y;
    cin >> m;
    vector<int> days(m);
    for (int &d : days) cin >> d;

    cin >> n;
    vector<string> months(n);
    for (string &m : months) cin >> m;

    cin >> y;
    vector<int> years(y);
    for (int &yr : years) cin >> yr;

    map<string, int> monthMap = {
        {"Jan", 1}, {"Feb", 2}, {"Mar", 3}, {"Apr", 4}, {"May", 5},
        {"Jun", 6}, {"Jul", 7}, {"Aug", 8}, {"Sep", 9},
        {"Oct", 10}, {"Nov", 11}, {"Dec", 12}
    };

    int maxY = -1, maxM = -1, maxD = -1;
    for (int yr : years) {
        for (string mm : months) {
            for (int dd : days) {
                if (dd >= 1 && dd <= 31) {
                    if (yr > maxY || (yr == maxY && monthMap[mm] > maxM) ||
                        (yr == maxY && monthMap[mm] == maxM && dd > maxD)) {
                        maxY = yr;
                        maxM = monthMap[mm];
                        maxD = dd;
                    }
                }
            }
        }
    }

    string monthNames[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                           "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    cout << setw(2) << setfill('0') << maxD << "-" 
         << monthNames[maxM - 1] << "-" << maxY << endl;
    return 0;
}