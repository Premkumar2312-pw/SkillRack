#include <iostream>
#include <iomanip>
using namespace std;

void rotate(string ts, int x) {
    int hh = stoi(ts.substr(0, 2));
    int mm = stoi(ts.substr(3, 2));
    hh = (hh - x) % 12;
    if (hh <= 0) hh += 12;
    mm = (mm - (x * 5)) % 60;
    if (mm < 0) mm += 60;

    cout << setw(2) << setfill('0') << hh << ":"
         << setw(2) << setfill('0') << mm << endl;
}

int main() {
    string ts;
    int x;
    cin >> ts >> x;
    rotate(ts, x);
    return 0;
}