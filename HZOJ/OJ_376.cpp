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
    int n, m, ans = 0;
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        int word, flag = 0;
        cin >> word;
        for (int j = 0; j < que.size(); j++) {
            if (que.front() == word) {
                flag = 1;
            }
            que.push(que.front());
            que.pop();
        }
        if (flag == 0) {
            ans++;
            que.push(word);
            if (que.size() > m) {
                que.pop();
            }
        }
    }
    cout << ans << endl;

    return 0;
}

