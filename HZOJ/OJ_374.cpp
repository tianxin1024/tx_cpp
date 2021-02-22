/*************************************************************************
	> File Name: OJ_374.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月22日 星期一 15时04分13秒
 ************************************************************************/

#include <iostream>
using namespace std;

int check(int a, int b, int c) {
    int num[10] = {0};
    for (int i = 0; i < 3; i++) {
        num[a % 10] = 1; a /= 10;
        num[b % 10] = 1; b /= 10;
        num[c % 10] = 1; c /= 10;
    }
    for (int i = 1; i < 10; i++) {
        if (num[i] == 0) return 0;
    }
    return 1;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int a1, a2, a3, flag = 0;
    for (int i = 123; i < 1000; i++) {
        a1 = i;
        a2 = i * y / x;
        a3 = i * z / x;
        if (a2 > 987 && a3 > 987) break;
        if (check(a1, a2, a3)) {
            cout << a1 << " " << a2 << " " << a3 << endl;
            flag = 1;
        }
    }
    if (flag == 0) {
        cout << "No" << endl;
    }

    return 0;
}

