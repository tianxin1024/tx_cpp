/*************************************************************************
	> File Name: OJ_110.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 22时58分41秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    if (x == 0) {
        printf("%.2f\n", x);
    } else if (x <= 15) {
        printf("%.2f\n", x * 6);
    } else {
        printf("%.2f\n", 15 * 6 + (x - 15) * 9);
    }

    return 0;
}

