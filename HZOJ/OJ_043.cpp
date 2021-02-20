/*************************************************************************
	> File Name: OJ_043.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月19日 星期五 21时22分05秒
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
int val[MAX_N + 5][MAX_N + 5];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> val[i][j];
        }
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
        }
    }
    cout << val[1][1] << endl;

    return 0;
}
