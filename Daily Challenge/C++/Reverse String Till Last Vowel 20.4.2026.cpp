#include <iostream>
using namespace std;

bool isVow(char ch){
    string v = "aeiouAEIOU";
    return v.find(ch) != string::npos;
}

int main(){
    string str;
    cin >> str;

    int idx = -1;

    for(int i = 0; i < str.size(); i++){
        if(isVow(str[i])){
            idx = i;
        }
    }

    int i = 0, j = idx;
    while(i < j){
        swap(str[i], str[j]);
        i++;
        j--;
    }

    cout << str;
}