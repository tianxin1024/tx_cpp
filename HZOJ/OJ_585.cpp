/*************************************************************************
	> File Name: OJ_585.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月16日 星期二 08时38分32秒
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

struct student {
    int score, cla;
};

bool cmp(const student &a, const student &b) {
    if (a.score == b.score) {
        return a.cla < b.cla;
    }
    return a.score > b.score;
}

int n;
student stu[205];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].score >> stu[i].cla;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (stu[j].cla < stu[i].cla) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
