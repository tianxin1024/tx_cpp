/*************************************************************************
	> File Name: OJ_155.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 20时27分21秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp, ans = 3, sum = 0;
    for (int i = 0; i < n; i++) {
        temp = 2 * i;
        ans += temp;
        cout << ans << endl;
        sum += ans;
    }
    cout << sum << endl;

    return 0;
}

