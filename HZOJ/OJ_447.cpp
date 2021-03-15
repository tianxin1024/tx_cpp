/*************************************************************************
	> File Name: OJ_447.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月15日 星期一 15时29分31秒
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

int check(int n) {
    while (n) {
        if (n % 10 != 4 && n % 10 != 7) {
            return 0;
        }
        n /= 10;
    }
   return 1;
}

int main() {
    int num[1005], cnt = 0;
    for (int i = 0; i < 1000; i++) {
        if (check(i)) {
            num[cnt++] = i;
        }
    }

    int n;
    cin >> n;
    for (int i = 1; i < cnt; i++) {
        if (n % num[i] == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
