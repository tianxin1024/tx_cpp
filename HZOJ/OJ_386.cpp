/*************************************************************************
	> File Name: OJ_386.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 21时05分44秒
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

struct xigua {
    int val;
    int index;
};

xigua wm[MAX_N + 5];

bool cmp(xigua a, xigua b) {
    return a.val < b.val;
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        scanf("%d", &(wm[i].val));
        wm[i].index = i + 1;
    }
    sort(wm, wm + n, cmp);
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        int l = 0, r = n - 1, flag = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (wm[mid].val == t) {
                cout << wm[mid].index << endl;
                flag = 1;
                break;
            }
            if (wm[mid].val < t) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (flag == 0) {
            cout << 0 << endl;
        }
    }
    return 0;
}
