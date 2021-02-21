/*************************************************************************
	> File Name: OJ_129.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 11时37分01秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 10000

int main() {
    int n, num[MAX_N + 5];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (int i = 1; i < n; i++) {
        if (num[i - 1] < num[i]) {
            num[i] = num[i - 1];
        } 
    }
    cout << num[n - 1] << endl;
    return 0;
}
