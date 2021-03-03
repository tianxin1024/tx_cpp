/*************************************************************************
	> File Name: 1119.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月03日 星期三 10时20分44秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <vector>
using namespace std;

int n, m, q, arr[205][205], num[205], now;

int main() {
    memset(arr, 0x3f, sizeof(arr));
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        arr[i][i] = 0;
    }
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a++, b++;
        arr[a][b] = arr[b][a] = c;
    }
    cin >> q;
    while (q--) {
        int x, y, t;
        cin >> x >> y >> t;
        x++, y++;
        while (num[now] <= t && now <= n) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    arr[i][j] = min(arr[i][j], arr[i][now] + arr[now][j]);
                }
            }
            now++;
        }
        if (arr[x][y] == 0x3f3f3f3f || num[x] > t || num[y] > t) {
            cout << -1 << endl;
        } else {
            cout << arr[x][y] << endl;
        }
    }

    return 0;
}
