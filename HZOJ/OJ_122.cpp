/*************************************************************************
	> File Name: OJ_122.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 10时52分31秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t < 43200) {
        printf("%02d:%02d:%02d am\n", t / 3600, t % 3600 / 60, t % 60);
    } else if (t < 43200 + 3600) {
        printf("%02d:%02d:%02d midnoon\n", t / 3600, t % 3600 / 60, t % 60);
    } else {
        t -= 43200;
        printf("%02d:%02d:%02d pm\n", t / 3600, t % 3600 / 60, t % 60);
    }
    return 0;
}

