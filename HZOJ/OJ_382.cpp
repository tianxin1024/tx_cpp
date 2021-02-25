/*************************************************************************
	> File Name: OJ_382.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 20时16分47秒
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
    int n, m;
    cin >> n >> m;
    queue<int> que;
    for (int i = 1; i <= n; i++) {
        que.push(i);
    }
    while (que.size() != 1) {
        for (int i = 1; i < m; i++) {
            que.push(que.front());
            que.pop();
        }
        que.pop();
    }
    cout << que.front() << endl;
    return 0;
}
