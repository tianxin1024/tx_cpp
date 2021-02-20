/*************************************************************************
	> File Name: OJ_111.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 23时11分19秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double m;
    cin >> m;
    if (m <= 3) {
        printf("14\n");
    } else {
        printf("%.1f\n", 14 + (m - 3) * 2.3);
    }

    return 0;
}

