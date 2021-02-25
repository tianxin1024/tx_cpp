/*************************************************************************
	> File Name: OJ_171.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月24日 星期三 08时54分55秒
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

int is_rev_num(int n, int base) {
    if (n < 0) return 0;
    int x = n, temp = 0;
    while (x) {
        temp = temp * base + x % 10;
        x /= base;
    }
    return temp == n;
}

int main() {
    int n;
    cin >> n;
    int i = 0, temp1 = n + 1, temp2 = n - 1;
    while (1) {
        if (is_rev_num(temp1 - n, 10)) {
            cout << temp1 << endl;
            break;
        }
        temp1++;
        if (is_rev_num(n - temp2, 10)) {
            cout << temp2 << endl;
            break;
        }
        temp2++;
    }

    return 0;
}
