/*************************************************************************
	> File Name: OJ_574.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 23时43分58秒
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

int n, ans;
set<int> se;

void my_insert(int x) {
    if (se.find(x) == se.end()) {
        se.insert(x);
    } else {
        se.erase(x);
        my_insert(x + 1);
    }
}

int main() {
    cin >> n;
    se.insert(-1);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        my_insert(t);
    }
    set<int>::iterator it, it2;
    it = it2 = se.begin();
    it2++;
    for (; it2 != se.end(); it++, it2++) {
        ans += (*it2 - *it - 1);
    }
    cout << ans << endl;
    return 0;
}
