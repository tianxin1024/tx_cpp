/*************************************************************************
	> File Name: OJ_517.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月28日 星期日 22时54分19秒
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

int check(int x, int y, int z) {
    if (x > y) swap(x, y);
    if (y > z) swap(y, z);
    if (x + y > z) return 1;
    return 0;
}

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i < n / 2; i++) {
        for (int j = i; j <= (n - i) / 2; j++) {
            if (check(i, j, (n - i - j))) {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
