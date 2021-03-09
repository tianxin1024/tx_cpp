/*************************************************************************
	> File Name: OJ_379.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 19时59分26秒
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
    int n;
    stack<int> st1, st2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t == 0) {
            cin >> t;
            st1.push(t);
            if (st2.empty()) {
                st2.push(t);
            } else {
                st2.push(max(st2.top(), t));
            }
        } else if (t == 1) {
            if (!st2.empty()) {
                st1.pop();
                st2.pop();
            }
        } else if (t == 2) {
            if (st2.empty()) {
                cout << 0 << endl;
            } else {
                cout << st2.top() << endl;
            }
        }
    }

    return 0;
}
