/*************************************************************************
	> File Name: OJ_287.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月08日 星期一 16时02分19秒
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
    priority_queue<int, vector<int>, greater<int> > que;
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        que.push(a);
    }
    while(que.size() != 1) {
        int a = que.top();
        que.pop();
        a += que.top();
        que.pop();
        ans += a;
        que.push(a);
    }
    cout << ans << endl;

    return 0;
}
