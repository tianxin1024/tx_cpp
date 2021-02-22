/*************************************************************************
	> File Name: OJ_159.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 22时18分50秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    char c, temp;
    cin >> c;
    int n = (int)(c - 'A'); 
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = i; j <= n; j++) {
            temp = (char)(c - j);
            cout << temp;
        }
        for (int j = n - 1; j >= i; j--) {
            cout << temp;
            temp = (char)(temp + 1);
        }
        cout << endl;
    }

    return 0;
}

