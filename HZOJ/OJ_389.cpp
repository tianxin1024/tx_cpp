/*************************************************************************
	> File Name: OJ_389.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月15日 星期一 16时38分56秒
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

int n, m, num[100005];

int func(int x) {
    int t = 1, last = num[0];
    for (int i = 1; i < n; i++) {
        if (num[i] - last >= x) {
            t++;
            last = num[i];
        }
    }
    return t;
}

int bs() {
    int l = 1, r = num[n - 1] - num[0];
    while (l != r) {
        int mid = (l + r + 1) / 2;
        int s = func(mid);
        if (s >= m) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    return l;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    cout << bs() << endl;

    return 0;
}
