/*************************************************************************
	> File Name: OJ_444.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月15日 星期一 14时53分10秒
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

struct node {
    int index;
    int number;
};

int n, m;
node que[105];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> que[i].number;
        que[i].index = i;
    }
    cin >> m;
    int flag = 0;
    for (int i = 1; i < n; i++) {
        if (flag == 1) {
            cout << " ";
        }
        if (m == que[i].index) {
            cout << que[n].number << " " <<  que[i].number << " ";
            i++;
        }
        cout << que[i].number;
        flag = 1;
    }
    cout << endl;

    return 0;
}
