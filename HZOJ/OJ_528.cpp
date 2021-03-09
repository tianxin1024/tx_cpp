/*************************************************************************
	> File Name: OJ_528.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月09日 星期二 16时37分03秒
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

struct node {
    int num, ans;
};

int n, x, y, num[105][105], check[105] = 0;

int main() {
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> num[i][j];
        }
    }
    queue<node> que;
    que.push({x, 0});
    while(!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 1; i <= n; i++) {
            if (num[temp.num][i] == 1 && check[i] == 0) {
                if (i == y) {
                    cout << temp.ans << endl;
                    return 0;
                }
            }
            que.push({i, temp.ans + 1});
            check[i] = 1;
        }
    }
    cout << 0 << endl;

    return 0;
}
