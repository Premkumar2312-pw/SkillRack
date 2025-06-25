#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int getDays(int m, int y) {
    if (m == 2) {
        return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) ? 29 : 28;
    }
    return (m == 4 || m == 6 || m == 9 || m == 11) ? 30 : 31;
}

string getMonthName(int m) {
    string names[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    return names[m];
}

int getMonthNum(string mmm) {
    string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                       "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 12; i++) {
        if (mmm == months[i]) return i + 1;
    }
    return -1;
}

int main() {
    string input;
    cin >> input;

    int d = stoi(input.substr(0, 2));
    string mmm = input.substr(3, 3);
    int y = stoi(input.substr(7));

    int m = getMonthNum(mmm);

    int pm = (m == 1) ? 12 : m - 1;
    int py = (m == 1) ? y - 1 : y;
    int nm = (m == 12) ? 1 : m + 1;
    int ny = (m == 12) ? y + 1 : y;

    cout << getMonthName(pm) << " " << py << " - " << getDays(pm, py) << " days\n";
    cout << getMonthName(nm) << " " << ny << " - " << getDays(nm, ny) << " days\n";

    return 0;
}