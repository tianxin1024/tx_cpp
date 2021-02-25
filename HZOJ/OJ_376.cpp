/*************************************************************************
	> File Name: OJ_376.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月24日 星期三 14时22分20秒
 ************************************************************************/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    queue<int> que;
    int n, m, ans;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int t, f = 0;
        cin >> t;
        for (int j = 0; j < que.size(); j++) {
            if (que.front() == t) {
                f = 1;
            }
        }

    }

    return 0;
}

