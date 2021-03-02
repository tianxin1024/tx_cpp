/*************************************************************************
	> File Name: OJ_442.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月01日 星期一 12时55分20秒
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

int f(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return f(n - 1) + f(n - 2);
}

int main() {
    int n, flag = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (flag == 1) cout << " ";
        cout << f(i);
        flag = 1;
    }
    cout << endl;

    return 0;
}
