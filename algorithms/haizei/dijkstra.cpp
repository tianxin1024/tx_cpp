/*************************************************************************
	> File Name: dijkstra.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月24日 星期三 21时34分59秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
using namespace std;

// 状态
struct node {
    int now, val;
    bool operator< (const node &b) const {
        return this->val > b.val;
    }
};

// 星边
struct edge {
    int e, v, next;
};

edge edg[200005];
int n, m, s, edg_cnt, head[100005], ans[100005];

// 加边
void add_edg(int t1, int t2, int t3) {
    edg[edg_cnt].e = t2;
    edg[edg_cnt].v = t3;
    edg[edg_cnt].next = head[t1];
    head[t1] = edg_cnt;
    edg_cnt++;
}


int main() {
    memset(head, -1, sizeof(head));
    memset(ans, 0x3F, sizeof(ans));
    scanf("%d%d%d", &n, &m, &s);
    // 存边
    for (int i = 0; i < m; i++) {
        int t1, t2, t3;
        scanf("%d%d%d", &t1, &t2, &t3);
        add_edg(t1, t2, t3);
        add_edg(t2, t1, t3);
    }
    // 准备
    priority_queue<node> que;
    que.push((node){s, 0});
    ans[s] = 0;
    // dijkstra
    while (!que.empty()) {
        node temp = que.top();
        que.pop();
        if (temp.val != ans[temp.now]) {
            continue;
        }
        for (int i = head[temp.now]; i != -1; i = edg[i].next) {
            int e = edg[i].e, v = edg[i].v;
            if (ans[e] > temp.val + v) {
                ans[e] = temp.val + v;
                que.push((node){e, ans[e]});
            }
        }
    }
    // 输出
    for (int i = 1; i <= n; i++) {
        if (ans[i] != 0x3F3F3F3F) {
            printf("%d\n", ans[i]);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
