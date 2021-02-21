/*************************************************************************
	> File Name: OJ_119.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 09时24分47秒
 ************************************************************************/

#include <iostream>
using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        month[2] += 1;
    }
    if (m == 1 && d == 1) {
        cout << y - 1 << " 12 31" << endl;
        cout << y << " 1 2" << endl;
    } else if (d == 1) {
        cout << y << " " << m - 1 << " " << month[m - 1] << endl;
        cout << y << " " << m << " 2" << endl;
    } else if (m == 12 && d == 31) {
        cout << y << " 12 30" << endl;
        cout << y + 1 << " 1 1" << endl;
    } else if (d == month[m]) {
        cout << y << " " << m << " " << month[m] - 1 << endl;
        cout << y << " " << m + 1 << " 1" << endl;
    } else {
        cout << y << " " << m << " " << d - 1 << endl;
        cout << y << " " << m << " " << d + 1 << endl;
    }
    return 0;
}

