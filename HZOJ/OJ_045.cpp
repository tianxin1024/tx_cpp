/*************************************************************************
	> File Name: OJ_045.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 08时54分27秒
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
#define MAX_N 1000
int dp[MAX_N + 5][MAX_N + 5];

int main() {
    string a, b;
    cin >> a >> b;
    for (int i = 0; a[i]; i++) {
        for (int j = 0; b[j]; j++) {
            dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            if (a[i] == b[j]) {
                dp[i + 1][j + 1] = max(dp[i + 1][j + 1],  dp[i][j] + 1);
            }
        }
    }
    cout << dp[a.size()][b.size()] << endl;

    return 0;
}
