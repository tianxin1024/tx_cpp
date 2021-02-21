/*************************************************************************
	> File Name: OJ_134.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 12时03分20秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int flag = 0;
    for (int i = a; i <= b; i++) {
        if (i % 11 == 0) {
            if (flag == 1) {
                cout << " ";
            }
            cout << i;
            flag = 1;
        }
    }


    return 0;
}

