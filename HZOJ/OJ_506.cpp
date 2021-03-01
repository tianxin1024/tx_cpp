/*************************************************************************
	> File Name: OJ_506.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月28日 星期日 17时16分21秒
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
#define MAX_N 30

struct node {
    int index;
    int number;
};

bool cmp(node a, node b) {
    return a.number < b.number;
}

int main() {
    int n, flag = 0;
    double sum = 0, now = 0;
    node stu[MAX_N + 5];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> stu[i].number;
        stu[i].index = i;
    }
    sort(stu + 1, stu + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (flag == 1) {
            cout << " ";
        }
        cout << stu[i].index;
        sum += now;
        now += stu[i].number;
        flag = 1;
    }
    cout << endl;
    printf("%.2f\n", sum / n);

    return 0;
}
