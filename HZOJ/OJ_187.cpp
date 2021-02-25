/*************************************************************************
	> File Name: OJ_187.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 23时20分00秒
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

long long f1(long long n) {
    if (n == 1) return 1;
    return 2 * f1(n - 1) + 1;
}

long long f2(long long n) {
    if (n == 1) return 1;
    return 2 * f2(n - 1) + n;
}

int main() {
    long long n;
    cin >> n;
    cout << f1(n) << " " << f2(n) << endl;

    return 0;
}
