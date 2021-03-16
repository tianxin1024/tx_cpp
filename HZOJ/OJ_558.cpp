/*************************************************************************
	> File Name: OJ_558.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月16日 星期二 09时52分30秒
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

int res[105][1005];
int total_t, total_n, n_time[105], n_val[105];


int main() {
    cin >> total_t >> total_n;
    for (int i = 1; i <= total_n; i++) {
        cin >> n_time[i] >> n_val[i];
    }
    for (int i = 1; i <= total_n; i++) {
        for (int j = 1; j <= total_t; j++) {
            if (j < n_time[i]) {
                res[i][j] = res[i - 1][j];
            } else {
                res[i][j] = max(res[i - 1][j], res[i - 1][j - n_time[i]] + n_val[i]);
            }
        }
    }
    cout << res[total_n][total_t] << endl;

    return 0;
}
