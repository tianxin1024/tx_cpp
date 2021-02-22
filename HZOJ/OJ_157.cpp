/*************************************************************************
	> File Name: OJ_157.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 21时12分46秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = i; j < n; j++) {
            cout << (char)('A' + j);
        }
        for (int j = n - 2; j >= i; j--) {
            cout << (char)('A' + j);
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = i; j < n; j++) {
            cout << (char)('A' + j);
        }
        for (int j = n - 2; j >= i; j--) {
            cout << (char)('A' + j);
        }
        cout << endl;
    } 

    return 0;
}

