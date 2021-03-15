/*************************************************************************
	> File Name: OJ_445.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月15日 星期一 15时14分13秒
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

int main() {
    int n, num[1005], ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++) {
        int cnt_l = 0, cnt_r = 0;
        for (int j = 0; j < i; j++) {
            if (num[j] > num[i]) cnt_l++;
        }
        for (int k = i + 1; k < n; k++) {
            if (num[k] > num[i]) cnt_r++;
        }
        if (cnt_l == cnt_r) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
