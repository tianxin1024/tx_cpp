/*************************************************************************
	> File Name: OJ_218.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月23日 星期二 15时14分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct stu {
    int h;
    int num;
};

bool cmp(stu a, stu b) {
    if (a.h == b.h) {
        a.num < b.num;
    }

    return a.h < b.h;
}

int main() {
    int n;
    cin >> n;
    stu s[100005];
    for (int i = 1; i <= n; i++) {
        cin >> s[i].h;
        s[i].num = i;
    }
    sort(s + 1, s + n + 1, cmp);
    int flag = 0;
    for (int i = 1; i <= n; i++) {
        if (flag == 1) {
            cout << " ";
        }
        cout << s[i].num;
        flag = 1;
    }
    cout << endl;

    return 0;
}
