/*************************************************************************
	> File Name: OJ_386_1.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月14日 星期日 22时44分10秒
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

struct xigua {
    int index, cnt;
};

bool cmp(const xigua &a, const xigua &b) {
    return a.cnt < b.cnt;
}

xigua wm[10005];
int n, m;


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> wm[i].cnt;
        wm[i].index = i + 1;
    }
    sort(wm, wm + n, cmp);
    for (int i = 0; i < m; i++) {
        int t , l = 0, r = n - 1, flag = 0;
        cin >> t;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (wm[mid].cnt == t) {
                flag = 1;
                cout << wm[mid].index << endl;
                break;
            } else if (wm[mid].cnt > t) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (flag == 0) {
            cout << 0 << endl;
        }
    }

    return 0;
}
