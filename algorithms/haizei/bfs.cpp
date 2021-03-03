/*************************************************************************
	> File Name: bfs.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月03日 星期三 11时07分27秒
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
    int x, y, step;
};

int n, m, cnt, sx, sy, ex, ey;
int dir[8][2] = {0, 1, 1, 0, 0, -1, -1, 0, 1, 1, 1, -1, -1, 1, -1, -1};
char mmap[2005][2005];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 'S') {
                sx = i, sy = j;
            }
            if (mmap[i][j] == 'T') {
                ex = i, ey = j;
            }
        }
    }
    queue<node> que;
    que.push((node){sx, sy, 0});
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (mmap[x][y] == 'T') {
                cout << temp.step + 1 << endl;
                return 0;
            }
            if (mmap[x][y] == '.') {
                mmap[x][y] = 'x';
                que.push((node){x, y, temp.step + 1});
            }
        }
    }
    cout << -1 << endl;

    return 0;
}
