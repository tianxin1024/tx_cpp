/*************************************************************************
	> File Name: OJ_164.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 22时57分42秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if ((n / m) * m < n) {
        cout << n / m + 1 << endl;
    } else if ((n / m) * m == n) {
        cout << n / m << endl;
    }

    return 0;
}

