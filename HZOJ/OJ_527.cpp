/*************************************************************************
	> File Name: OJ_527.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月01日 星期一 09时13分22秒
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
    int x, y, step, d;
};

int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int n, m, d, check[105][105][105];
char mmap[105][105];


int main() {
    cin >> n >> m >> d;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
        }
    }
    queue<node> que;
    que.push({1, 1, 0, d});
    for (int i = 0; i <= d; i++) {
        check[1][1][i] = 1;
    }
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (x == n && y == m) {
                cout << temp.step + 1 << endl;
                return 0;
            }
            if (mmap[x][y] == 'P' && check[x][y][temp.d] == 0) {
                check[x][y][temp.d] = 1;
                que.push({x, y, temp.step + 1, temp.d});
            }
            for (int j = 2; j <= temp.d; j++) {
                int x1 = temp.x + j * dir[i][0];
                int y1 = temp.y + j * dir[i][1];
                if (mmap[x1][y1] == 0) {
                    break;
                }
                if (x1 == n && y1 == m) {
                    cout << temp.step + 1 << endl;
                    return 0;
                }
                if (mmap[x1][y1] == 'P' && check[x1][y1][temp.d - j] == 0) {
                    check[x1][y1][temp.d - j] = 1;
                    que.push({x1, y1, temp.step + 1, temp.d - j});
                }
            }
        }
    }
    cout << "impossible" << endl;

    return 0;
}
