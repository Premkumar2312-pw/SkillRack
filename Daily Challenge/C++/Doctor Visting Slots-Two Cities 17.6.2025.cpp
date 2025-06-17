#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

string format_date(struct tm date) {
    const char* months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    char buffer[20];
    sprintf(buffer, "%02d-%s-%04d", date.tm_mday, months[date.tm_mon], date.tm_year + 1900);
    return string(buffer);
}

int main() {
    int m, n, y;
    cin >> m >> n >> y;

    tm dt = {};
    dt.tm_year = y - 1900;
    dt.tm_mon = 0;
    dt.tm_mday = 1;

    tm ed = {};
    ed.tm_year = y - 1900;
    ed.tm_mon = 11;
    ed.tm_mday = 31;

    time_t end_time = mktime(&ed);
    char city = 'A';

    vector<pair<string, string>> cityA, cityB;

    while (mktime(&dt) <= end_time) {
        tm start = dt;
        int days = (city == 'A') ? m : n;

        dt.tm_mday += days - 1;
        mktime(&dt);
        if (mktime(&dt) > end_time)
            dt = ed;

        if (city == 'A') cityA.push_back({format_date(start), format_date(dt)});
        else cityB.push_back({format_date(start), format_date(dt)});

        dt.tm_mday += 1;
        mktime(&dt);
        city = (city == 'A') ? 'B' : 'A';
    }

    cout << "City A:\n";
    for (auto [s, t] : cityA)
        cout << s << " to " << t << endl;

    cout << "City B:\n";
    for (auto [s, t] : cityB)
        cout << s << " to " << t << endl;

    return 0;
}
