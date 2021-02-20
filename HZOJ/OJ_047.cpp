/*************************************************************************
	> File Name: OJ_047.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 16时30分31秒
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
#define MAX_N 10000
int dp[MAX_N + 5];

int main() {
    int V, n, v, w;
    cin >> V >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w;
        cout << " ============================ " << endl;
        for (int j = V; j >= v; j--) {
            dp[j] = max(dp[j], dp[j - v] + w);
            cout << "j = " << j << "  dp[j] = " << dp[j] << endl;
        }
    }
    cout << dp[V] << endl;

    return 0;
}
