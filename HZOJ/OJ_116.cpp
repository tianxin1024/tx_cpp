/*************************************************************************
	> File Name: OJ_116.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 23时42分03秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b) {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        int temp;
        temp = a;
        a = c;
        c = temp;
    }

    if (b + c < a) {
        cout << "illegal triangle" << endl;
    } else if (b * b + c * c > a * a) {
        cout << "acute triangle" << endl;
    } else if (b * b + c * c == a * a) {
        cout << "right triangle" << endl;
    } else if (b * b + c * c < a * a) {
        cout << "obtuse triangle" << endl;
    }

    return 0;
}

