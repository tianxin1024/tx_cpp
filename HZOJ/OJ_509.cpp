/*************************************************************************
	> File Name: OJ_509.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月09日 星期二 15时34分02秒
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

struct task {
    int money, time;
};

bool cmp(task a, task b) {
    if (a.money == b.money) {
        return a.time < b.time;
    }
    return a.money > b.money;
}

int main() {
    int M, n, label[100000] = {1};
    cin >> M >> n;
    task game[505];
    for (int i = 0; i < n; i++) {
        cin >> game[i].time;
    }
    for (int i = 0; i < n; i++) {
        cin >> game[i].money;
    }
    sort(game, game + n, cmp);
    
    for (int i = 0; i < n; i++) {
        for (int j = game[i].time; j >= 0; j--) {
            if (label[j] == 0) {
                label[j] = 1;
                break;
            }
            if (j == 0) {
                M -= game[i].money;
            }
        }
    }
    cout << M << endl;
    return 0;
}
