/*************************************************************************
	> File Name: OJ_518.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月28日 星期日 23时01分29秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, x = 1, num = 0, ans = 0;
    cin >> n;
    while (1) {
        for (int i = 1; i <= x; i++) {
            ans += x;
            num++;
            if (num == n) {
                cout << ans << endl;
                break;
            }
        }
        x++;
    }
    return 0;
}
