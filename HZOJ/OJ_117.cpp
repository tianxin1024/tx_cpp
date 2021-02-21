/*************************************************************************
	> File Name: Oj_117.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 09时10分02秒
 ************************************************************************/

#include <iostream>
using namespace std;

int rev_num(int n, int base) {
    if (n < 0) return 0;
    int x = n, temp = 0;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == n;
}

int main() {
    int n;
    cin >> n;
    string s;
    s = rev_num(n, 10) ? "YES" : "NO";
    cout << s << endl;

    return 0;
}

