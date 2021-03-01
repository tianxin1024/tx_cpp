/*************************************************************************
	> File Name: OJ_513.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月28日 星期日 21时52分54秒
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

int m, t, ans = 0;

int have(int n) {
    while (n) {
        if (n % 10 == t) {
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int main() {
    cin >> m >> t;
    for (int i = 1; i <= m; i++) {
        while (have(i)) i++;
        ans++;
    }
    cout << ans << endl;

    return 0;
}
