#include <bits/stdc++.h>
using namespace std;

struct Term {
    int coef, exp;
};

bool cmp(Term a, Term b) {
    return a.exp > b.exp;
}

int main() {
    string S;
    cin >> S;

    vector<Term> terms;
    regex re("([+-]?[0-9]*)x\\^([0-9]+)");
    auto begin = sregex_iterator(S.begin(), S.end(), re);
    auto end = sregex_iterator();

    for (auto i = begin; i != end; i++) {
        smatch match = *i;
        string coefStr = match[1].str();
        int coef = coefStr.empty() || coefStr == "+" ? 1 : (coefStr == "-" ? -1 : stoi(coefStr));
        int exp = stoi(match[2].str());
        terms.push_back({coef, exp});
    }

    sort(terms.begin(), terms.end(), cmp);

    bool flag = false;
    for (auto &t : terms) {
        if (t.coef == 0) continue;
        if (t.coef > 0) cout << "+";
        cout << t.coef << "x^" << t.exp;
        flag = true;
    }
    if (!flag) cout << "0";
}
