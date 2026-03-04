#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    map<string,int> month = {
        {"JAN",1},{"FEB",2},{"MAR",3},{"APR",4},{"MAY",5},{"JUN",6},
        {"JUL",7},{"AUG",8},{"SEP",9},{"OCT",10},{"NOV",11},{"DEC",12}
    };

    vector<vector<string>> dates;

    for(int i=0;i<n;i++) {
        string line;
        getline(cin,line);

        stringstream ss(line);
        string part;
        vector<string> temp;

        while(getline(ss,part,'-'))
            temp.push_back(part);

        sort(temp.begin(), temp.end(),
             [](string a,string b){ return a.length()<b.length(); });

        dates.push_back(temp);
    }

    sort(dates.begin(), dates.end(),
        [&](vector<string> a, vector<string> b){
            if(stoi(a[2]) != stoi(b[2]))
                return stoi(a[2]) < stoi(b[2]);
            if(month[a[1]] != month[b[1]])
                return month[a[1]] < month[b[1]];
            return stoi(a[0]) < stoi(b[0]);
        });

    for(auto d : dates)
        cout << d[0] << "-" << d[1] << "-" << d[2] << endl;
}