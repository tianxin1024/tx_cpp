/*************************************************************************
	> File Name: OJ_135.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 12时24分59秒
 ************************************************************************/

#include <iostream>
using namespace std;
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int check(int y, int m) {
    if (y < 0 && m < 0) return 0;
    if ((y % 4 == 0 && y % 400 != 0) || (y % 400 == 0)) {
        month[2] = 29;
    } else month[2] = 28;
    return month[m];
}

int main() {
    int x, y, m, d;
    cin >> x >> y >> m >> d;
    d += x;
    if ((y % 4 == 0 && y % 400 != 0) || (y % 400 == 0)) {
        month[2] += 1;
    }

    while (d > check(y, m)) {
        d -= check(y, m);
        m++;
        if (m == 13) {
            m = 1;
            y++;
        }
    }
    cout << y << " " << m << " " << d << endl;
    return 0;
}

