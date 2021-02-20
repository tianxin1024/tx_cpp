/*************************************************************************
	> File Name: OJ_042.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月19日 星期五 20时24分25秒
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
#include <vector>
using namespace std;

int func[25][10005] = {0};

int main() {
    int m, n, v;
    cin >> m >> n;
    func[0][0] = 1;
    for (int i = 1; i <= m; i++) {
        cin >> v;
        func[i][0] = 1;
        for (int j = 1; j <=n; j++) {
            func[i][j] = func[i - 1][j];
            if (j >= v) func[i][j] += func[i][j - v];
            cout << func[i][j] << " ";
            func[i][j] %= 9973;
        }
        cout << endl;
    }
    cout << func[m][n] << endl;
    return 0;
}
