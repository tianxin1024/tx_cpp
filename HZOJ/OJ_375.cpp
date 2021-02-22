/*************************************************************************
	> File Name: OJ_375.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月22日 星期一 15时47分18秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 300

struct student {
    int yw;
    int sx;
    int yy;
    int sum;
    int id;
};

bool cmp(student a, student b) {
    if (a.sum == b.sum) {
        if (a.yw == b.yw) {
            return a.id > b.id;
        }
        return a.yw > b.yw;
    }
    return a.sum > b.sum;
}

int main() {
    int n;
    student stu[MAX_N + 5];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> stu[i].yw >> stu[i].sx >> stu[i].yy;
        stu[i].sum = stu[i].yw + stu[i].sx + stu[i].yy;
        stu[i].id = i;
    }
    sort(stu + 1, stu + n + 1, cmp);
    for (int i = 1; i <= 5; i++) {
        cout << stu[i].id << " " << stu[i].sum << endl;
    }

    return 0;
}

