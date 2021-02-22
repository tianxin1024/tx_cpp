/*************************************************************************
	> File Name: OJ_165.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 23时08分01秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int a, b, c;
    cin >> c;
    int ans = 0;
    for (long long int a = 1; a < c; a++) {
        b = sqrt(c * c - a * a);
        if (a * a + b * b == c * c) {
            ans++;
        }
    }
    cout << ans / 2 << endl;

    return 0;
}

