/*************************************************************************
	> File Name: OJ_158.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 21时22分46秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((n - j) != (n - i)) {
                cout << " ";
            } else {
                cout << n - j;
            }
        }
        for (int j = 0; j <= n; j++) {
            if (j < (n - i)) {
                cout << " ";
            } else if (j == (n - i)){
                cout << j;
            } 
        }
        cout << endl;
    }
    for (int i = 0; i <= n; i++) {
        if (i != n) {
            cout << " ";
        } else {
            cout << 0 << endl;;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if ((n - j) != (n - i)) {
                cout << " ";
            } else {
                cout << n - j;
            }
        }
        for (int j = 0; j <= n; j++) {
            if (j < (n - i)) {
                cout << " ";
            } else if (j == (n - i)){
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}

