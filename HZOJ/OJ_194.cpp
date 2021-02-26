/*************************************************************************
	> File Name: OJ_194.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 23时32分11秒
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
    int n, num[100005] = {0}, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> s;
    for (int i = 0; i < n; i++) {
        int f = s - num[i];
        int l = i + 1, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (num[mid] == f) {
                cout << "Yes" << endl;
                return 0;
            }
            if (num[mid] > f) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
