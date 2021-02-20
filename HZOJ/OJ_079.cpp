/*************************************************************************
	> File Name: OJ_079.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月20日 星期六 19时34分22秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    int num[10000005] = {1, 1};
    cin >> a >> b;
    for (int i = 2; i * i <= b; i++) {
        if (num[i] == 0) {
            for (int j = 2; i * j <= b; j++) {
                num[i * j] = 1;
            }
        }
    }
    for (int i = a; i <= b; i++) {
        if (num[i] == 0) {
            cout << i << endl;
        } 
    }
    return 0;
}
