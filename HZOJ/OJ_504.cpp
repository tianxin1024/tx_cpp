/*************************************************************************
	> File Name: OJ_504.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月09日 星期二 15时56分47秒
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
    string n;
    int s, num[250], ans;
    cin >> n >> s;
    for (int i = 0; i < n.size(); i++) {
        num[i] = n[i] - '0';
    }
    sort(num, num + n.size());
    int temp = 1;
    for (int i = n.size()- s - 1; i >= 0; i--) {
        ans += num[i] * temp;
        temp *= 10;
    }
    cout << ans << endl;

    return 0;
}
