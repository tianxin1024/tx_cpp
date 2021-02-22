/*************************************************************************
	> File Name: OJ_080.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月22日 星期一 14时13分26秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
    int x, y, cnt;
};

int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int n, m;
char mmap[505][505];

int main() {
    cin >> n >> m;
    queue<node> que;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 's') {
                que.push({i, j, 0});
            }
        }
    }
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (mmap[x][y] == 'g') {
                cout << temp.cnt + 1 << endl;
                return 0;
            }
            if (mmap[x][y] == '.') {
                que.push({x, y, temp.cnt + 1});
                mmap[x][y] = '#';
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

