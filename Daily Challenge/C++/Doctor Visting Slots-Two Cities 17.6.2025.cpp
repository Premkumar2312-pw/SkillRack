#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
using namespace std;

string get_date_string(tm dt) {
    const char* months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    char buf[20];
    sprintf(buf, "%02d-%s-%d", dt.tm_mday, months[dt.tm_mon], dt.tm_year + 1900);
    return string(buf);
}

tm add_days(tm dt, int days) {
    time_t t = mktime(&dt);
    t += days * 86400;
    return *localtime(&t);
}

int main() {
    int M, N, Y;
    cin >> M >> N >> Y;

    tm curr = {}, end = {};
    curr.tm_year = end.tm_year = Y - 1900;
    curr.tm_mon = 0; curr.tm_mday = 1;
    end.tm_mon = 11; end.tm_mday = 31;
    mktime(&curr); mktime(&end);

    vector<string> A, B;
    bool f = true;

    while (mktime(&curr) <= mktime(&end)) {
        int t = f ? M : N;
        tm nd = add_days(curr, t - 1);
        if (mktime(&nd) > mktime(&end)) nd = end;

        string s = get_date_string(curr) + " to " + get_date_string(nd);
        if (f) A.push_back(s);
        else B.push_back(s);

        curr = add_days(nd, 1);
        f = !f;
    }

    cout << "City A:\n";
    for (auto& s : A) cout << s << "\n";
    cout << "City B:\n";
    for (auto& s : B) cout << s << "\n";
    return 0;
}