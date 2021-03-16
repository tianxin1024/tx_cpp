/*************************************************************************
	> File Name: OJ_586.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月16日 星期二 09时18分48秒
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
    int num[10] = {1};
    while (x) {
        num[x % 10]++;
        num[y % 10]++;
        num[z % 10]++;
        x /= 10;
        y /= 10;
        z /= 10;
    }
    for (int i = 1; i <= 9; i++) {
        if (num[i] != 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    for (int i = 111; i < 1000; i++) {
        int j = i * y / x;
        int k = i * z / x;
        if (check(i, j, k)) {
            cout << i << " " << j << " " << k << endl;
        }
    }

    return 0;
}
