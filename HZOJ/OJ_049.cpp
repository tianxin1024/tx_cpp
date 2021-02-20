/*************************************************************************
	> File Name: OJ_049.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 16时12分38秒
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
#define MAX_N 100000
int dp[MAX_N + 5];

int main() {
    int V, n, v, w, s;
    cin >> V >> n;
    for (int i = 1; i <=n; i++) {
        cin >> v >> w >> s;
        for (int k = 1; s; k *= 2) {
            if (k > s) k = s;
            s -= k;
            for (int j = V; j >= k * v; j--) {
                dp[j] = max(dp[j], dp[j - k * v] + k * w);
            }
        }
    }
    cout << dp[V] << endl;

    return 0;
}
