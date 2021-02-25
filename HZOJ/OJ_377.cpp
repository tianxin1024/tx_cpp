/*************************************************************************
	> File Name: OJ_377.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 16时08分57秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    string str;
    stack<int> sta;
    cin >> str;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(') {
            sta.push(i);
        } else if (str[i] == ')') {
            if (sta.empty()) {
                cout << "NO" << endl;
                return 0;
            } else {
                sta.pop();
            }
        }
    }

    if (sta.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
