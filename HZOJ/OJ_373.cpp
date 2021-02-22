/*************************************************************************
	> File Name: OJ_373.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月22日 星期一 14时43分42秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 10000

int main() {
    int n, data[MAX_N + 5][4] = {0}, x, y;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> data[i][0] >> data[i][1] >> data[i][2] >> data[i][3];
        data[i][2] += data[i][0];
        data[i][3] += data[i][1];
    }
    cin >> x >> y;
    int ret = -1;
    for (int i = n; i > 0; i--) {
        if (x >= data[i][0] && x <= data[i][2] && y >= data[i][1] && y <= data[i][3]) {
            ret = i;
            break;
        }
    }
    cout << ret << endl;

    return 0;
}

