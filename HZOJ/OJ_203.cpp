/*************************************************************************
	> File Name: OJ_203.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月08日 星期一 20时08分45秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n, m, mat[15][15], num[105], cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            num[cnt] = mat[i][j];
            cnt++;
        }
    }

    for (int i = 0; i < m; i++) {
        int temp = mat[0][i];
        for (int j = 1; j < n; j++) {
            if (mat[j][i] > temp) {
                temp = mat[j][i];
            }
        }
        cout << temp << endl;
    }

    sort(num, num + cnt);
    
    int sum = 0, ans = 0;
    for (int i = cnt - 1; i >= 0; i--) {
        cout << num[i];
        sum += num[i];
        if (i) {
            cout << " ";
        }
    }
    cout << endl;

    int avg = round(1.0 * sum / cnt);
    cout << avg << endl;

    for (int i = cnt - 1; i >= 0; i--) {
        if (avg <= num[i]) {
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
