/*************************************************************************
	> File Name: OJ_179.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月23日 星期二 23时22分33秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int p, q;

double f(double x) {
    return p * x + q;
}

int main() {
    cin >> p >> q;
    double left = -20, right = 20;
    while (fabs(left - right) > 1E-6) {
        double mid = (left + right) / 2;
        if (f(left) * f(mid) > 0) {
            left = mid;
        } else {
            right = mid;
        }
    }
    printf("%.4f\n", left);

    return 0;
}
