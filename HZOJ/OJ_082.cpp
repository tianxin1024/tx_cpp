/*************************************************************************
	> File Name: OJ_082.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月15日 星期一 17时15分48秒
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

long long n, m, num[1000005], rawr;

long long func(long long x) {
    long long t = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] > x) {
            t += num[i] - x;
        }
    }
    return t;
}

long long bs() {
    long long l = 0, r = rawr;
    while (l != r) {
        long long mid = (l + r + 1) / 2;
        long long s = func(mid);
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
        rawr = max(rawr, num[i]);
    }
    cout << bs() << endl;

    return 0;
}
