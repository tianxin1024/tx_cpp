/*************************************************************************
	> File Name: OJ_154.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 20时18分33秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = n - i; j > 0; j--) {
            if (flag == 1) {
                cout << " ";
            }
            cout << j;
            flag = 1;
        }
        cout << endl;
    }

    return 0;
}

