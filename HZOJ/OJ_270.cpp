/*************************************************************************
	> File Name: OJ_270.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月26日 星期五 10时00分26秒
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
    int n, m;
    cin >> n >> m;
    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    int local = num[0]; 
    int global = num[0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            m= m;
        }
        local = max(num[i], num[i] + local);
        global = max(local, global);
    }
    cout << global << endl;

    return 0;
}
