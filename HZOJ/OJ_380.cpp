/*************************************************************************
	> File Name: OJ_380.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月23日 星期二 14时59分22秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

bool cmp(string a, string b) {
    if (a.size() == b.size()) {
        return a > b;
    }
    return a.size() > b.size();
}

int main() {
    int n;
    string s[105];
    map<string, int> ma;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        ma[s[i]] = i;
    }
    sort(s + 1, s + n + 1, cmp);
    cout << ma[s[1]] << endl;
    cout << s[1] << endl;
    return 0;
}

