/*************************************************************************
	> File Name: 1364.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月03日 星期三 09时52分30秒
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

int n, arr[105][105], num[105];

int main() {
    memset(arr, 0x3f, sizeof(arr));
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> num[i] >> a >> b;
        if (a != 0) {
            arr[i][a] = 1;
            arr[a][i] = 1;
        }
        if (b != 0) {
            arr[i][b] = 1;
            arr[b][i] = 1;
        }
        arr[i][i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                arr[j][k] = min(arr[j][k], arr[j][i] + arr[j][k]);
            }
        }
    }

    int ans = 999999999;
    for (int i = 1; i <= n; i++) {
        int t = 0;
        for (int j = 1; j <= n; j++) {
            t += num[j] * arr[j][i];
        }
        ans = min(ans, t);
    }
    cout << ans << endl;
    return 0;
}
