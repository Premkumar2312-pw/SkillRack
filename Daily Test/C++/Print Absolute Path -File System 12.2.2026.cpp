1#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> entries;
    string line;

    while (getline(cin, line)) {
        entries.push_back(line);
    }

    vector<string> stack;
    vector<string> result;

    for (string entry : entries) {
        int level = 0;
        while (level < entry.size() && entry[level] == '\t')
            level++;

        string name = entry.substr(level);

        while (stack.size() > level)
            stack.pop_back();

        stack.push_back(name);

        if (name.find('.') != string::npos) {
            string path = stack[0];
            for (int i = 1; i < stack.size(); i++)
                path += "/" + stack[i];
            result.push_back(path);
        }
    }

    if (result.empty())
        cout << -1;
    else
        for (string path : result)
            cout << path << endl;
}