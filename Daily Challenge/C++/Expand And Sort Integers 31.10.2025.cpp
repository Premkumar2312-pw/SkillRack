#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> l(n);
    for (int i=0; i<n; i++) {
        std::cin >> l[i];
    }
    std::vector<int> l1;
    for (const auto& str : l) {
        int maxVal = -1;
        for (size_t j=0; j<str.size(); j++) {
            std::string newNum = str.substr(0,j) + std::string(str[j]-'0', str[j]-'0') + str.substr(j+1);
            int val = std::stoi(newNum);
            if(val > maxVal) maxVal = val;
        }
        l1.push_back(maxVal);
    }
    std::sort(l1.begin(), l1.end());
    for (auto v : l1)
        std::cout << v << " ";
    return 0;
}