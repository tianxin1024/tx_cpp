/*************************************************************************
	> File Name: OJ_514.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月28日 星期日 22时04分11秒
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

int n, ans = 0;
int nums[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int check(int x, int y) {
    int z = x + y;
    int xn = 0, yn = 0, zn = 0;
    if (x == 0) {
        xn = nums[0];
    } else {
        while (x) {
            xn += nums[x % 10];
            x /= 10;
        }
    }

    if (y == 0) {
        yn = nums[0];
    } else {
        while (y) {
            yn += nums[y % 10];
            y /= 10;
        }
    }

    if (z == 0) {
        zn = nums[0];
    } else {
        while (z) {
            zn += nums[z % 10];
            z /= 10;
        }
    }
    if (xn + yn + zn + 4 == n) {
        return 1;
    }
    return 0;
}

int main() {
    cin >> n;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            if (check(i, j)) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
