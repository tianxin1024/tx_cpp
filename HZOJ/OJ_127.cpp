/*************************************************************************
	> File Name: OJ_127.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 11时29分07秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
    double x, n;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        x = x * (1 + 0.06); 
    }
    cout << floor(x) << endl;

    return 0;
}

