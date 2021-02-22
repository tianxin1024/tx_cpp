/*************************************************************************
	> File Name: OJ_161.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 22时43分32秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        x = x * (1 + 0.06);
    }
    printf("%.6f\n", x);

    return 0;
}

