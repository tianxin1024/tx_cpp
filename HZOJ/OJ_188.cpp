/*************************************************************************
	> File Name: OJ_188.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月23日 星期二 22时54分26秒
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
#define MAX_N 1000005

int num[MAX_N + 5];

void init() {
    for (int i = 2; i * i <= MAX_N + 5; i++) {
        if (num[i] == 0) {
            for (int j = 2; i * j <= MAX_N + 5; j++) {
                num[i * j] = 1;
            }
        }
    }
}

int main() {
    init();
    int m, n;
    cin >> m >> n;
    for (int i = n; i <= m; i++) {
        if (num[i] == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
