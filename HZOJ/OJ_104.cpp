/*************************************************************************
	> File Name: OJ_104.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 22时42分36秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < 3; i++) {
        if (m  % 10 == 9) {
            cout << "YES" << endl;
            return 0;
        } else {
            m /= 10;
        }
    }
    cout << "NO" << endl;

    return 0;
}
