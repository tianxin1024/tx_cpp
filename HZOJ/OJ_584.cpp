/*************************************************************************
	> File Name: OJ_584.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月01日 星期一 09时50分57秒
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

int n, num[100005], ans[100005], now;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    ans[0] = num[0];
    now++;
    for (int i = 1; i < n; i++) {
        if (num[i] >= ans[now - 1]) {
            ans[now] = num[i];
            now++;
        } else {
            int l = 0, r = now - 1;
            while (l != r) {
                int mid = (l + r) / 2;
                if (ans[mid] <= num[i]) {
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }
            ans[l] = num[i];
        }
    }
    cout << now << endl;

    return 0;
}
