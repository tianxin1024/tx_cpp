/*************************************************************************
	> File Name: OJ_503.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月09日 星期二 14时40分24秒
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

#define MAX_N 30000

int main() {
    int w, n, num[MAX_N + 5], ans;
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i--) {
        if (num[i] == 0) continue;
        ans++;
        for (int j = i - 1; j >=0; j--) {
            if (num[j] != 0 && num[i] + num[j] <= w) {
                num[j] = 0;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
