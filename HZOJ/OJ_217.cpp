/*************************************************************************
	> File Name: OJ_217.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月23日 星期二 14时23分38秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, num[105] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        num[temp] += 1;
    }
    int ans = 0;
    for(int i = 100; i >= 0; i--) {
        ans += num[i];
        if (2 * ans >= n) {
            cout << i << " " << ans << endl;
            break;
        }
    }

    return 0;
}
