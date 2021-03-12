/*************************************************************************
	> File Name: OJ_043_1.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月12日 星期五 14时16分58秒
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

int n, num[1005][1005];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            scanf("%d", &num[i][j]);
        }
    }

    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            num[i][j] += max(num[i + 1][j], num[i + 1][j + 1]);
        }
    }
    printf("%d\n", num[1][1]);

    /*
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            num[i][j] += max(num[i - 1][j - 1], num[i - 1][j]);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, num[n][i]);
    }
    printf("%d\n", ans);
    */

    return 0;
}
