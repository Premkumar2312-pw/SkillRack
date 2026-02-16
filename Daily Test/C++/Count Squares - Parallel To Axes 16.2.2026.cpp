#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<pair<int,int>> points;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.insert({x, y});
    }

    vector<pair<int,int>> pts(points.begin(), points.end());

    int count = 0;
    int size = pts.size();

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {

            int dx = pts[j].first - pts[i].first;
            int dy = pts[j].second - pts[i].second;

            if(abs(dx) == abs(dy) && dx != 0) {

                pair<int,int> p3 = {pts[i].first, pts[j].second};
                pair<int,int> p4 = {pts[j].first, pts[i].second};

                if(points.count(p3) && points.count(p4)) {
                    count++;
                }
            }
        }
    }

    cout << count / 2;
}