/*************************************************************************
	> File Name: OJ_115.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 23时28分12秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    if (m == n) {
        cout << 100 << endl;
    } else if ((m % 10) == (n / 10) && (m / 10) == (n % 10)) {
        cout << 20 << endl;
    } else if ((m % 10) == (n / 10) || (m % 10) == (n % 10) || \
               (m / 10) == (n / 10) || (m / 10) == (n % 10)) {
        cout << 2 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}

