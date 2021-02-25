/*************************************************************************
	> File Name: OJ_384.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 20时38分00秒
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

int have7(int m) {
    if (m % 7 == 0 ) {
        return 1;
    }
    while (m) {
        if (m % 10 == 7) {
            return 1;
        }
        m /= 10;
    }
    return 0;
}

int main() {
    int n, x, t;
    cin >> n >> x >> t;
    queue<int> que;
    for (int i = 1; i <= n; i++) {
        que.push(i);
    }
    for (int i = 1; i < x; i++) {
        que.push(que.front());
        que.pop();
    }
    while (que.size() != 1) {
        if (have7(t)) {
            que.pop();
        } else {
            que.push(que.front());
            que.pop();
        }
        t++;
    }
    cout << que.front() << endl;

    return 0;
}
