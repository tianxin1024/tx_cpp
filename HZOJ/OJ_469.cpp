/*************************************************************************
	> File Name: OJ_469.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月08日 星期一 17时19分28秒
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
    int x, ind = 1, ans = 0;
    string n;
    cin >> x >> n;
    for (int i = n.size() - 1; i >= 0; i--) {
        ans += (n[i] - '0') * ind;
        ind *= x;
    }
    cout << ans << endl;
    return 0;
}
