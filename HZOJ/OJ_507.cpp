/*************************************************************************
	> File Name: OJ_507.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月28日 星期日 18时17分21秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int a, b;
};

bool cmp(node x, node y) {
    if (x.a + x.b == y.a + y.b) return x.a < y.a;
    return x.a + x.b < y.a + y.b;
}

int main() {
    int n;
    node stu[50005];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].a >> stu[i].b;
    }
    sort(stu, stu + n, cmp);
    int ans = -99999999, sum = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, sum - stu[i].b);
        sum += stu[i].a;
    }
    cout << ans << endl;

    return 0;
}
