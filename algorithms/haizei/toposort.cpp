/*************************************************************************
	> File Name: toposort.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月07日 星期日 20时01分10秒
 ************************************************************************/

#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

struct edge {
    int e, next;
};

int n, m, in_degree[105], head[105], ans[105], cnt;
edge edg[1005];

int main() {
    memset(head, -1, sizeof(head));
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        edg[i].e = b;
        edg[i].next = head[a];
        head[a] = i;
        in_degree[b]++;
    }
    stack<int> sta;
    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == 0) {
            sta.push(i);
        }
    }
    while (!sta.empty()) {
        int t = sta.top();
        sta.pop();
        cout << t << " -> ";
        ans[cnt++] = t;
        for (int i = head[t]; i != -1; i = edg[i].next) {
            in_degree[edg[i].e]--;
            if (in_degree[edg[i].e] == 0) {
                sta.push(edg[i].e);
            }
        }
    }
    if (cnt == n) {
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    } else {
        cout << "loop" << endl;
    }
    return 0;
}
