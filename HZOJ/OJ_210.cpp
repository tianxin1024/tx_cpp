/*************************************************************************
	> File Name: OJ_210.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月08日 星期一 19时19分34秒
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
#define MAX_N 26

int main() {
    int n;
    string str[MAX_N + 5];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str, str + n);
    for (int i = 0; i < n; i++) {
        if (i) {
            cout << " ";
        } 
        cout << str[i];
    }

    return 0;
}
