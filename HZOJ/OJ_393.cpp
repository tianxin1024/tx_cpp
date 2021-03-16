/*************************************************************************
	> File Name: OJ_393.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月15日 星期一 16时45分18秒
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
#include <cmath>
using namespace std;

int n, m;
double num[10005], mmax;

int func(double x) {
    int cnt = 0; 
    for (int i = 0; i < n; i++) {
        cnt += num[i] / x;
    }
    return cnt;
}

double bs() {
    double l = 0, r = mmax;
    while (fabs(l - r) > 0.00005) {
        double mid = (l + r) / 2;
        int s = func(mid);
        if (s >= m) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return r;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        mmax = max(mmax, num[i]);
    }
    double ans = bs();
    double t1 = (int)(ans * 100) / 100.0;
    printf("%.2f\n", t1);
    return 0;
}
