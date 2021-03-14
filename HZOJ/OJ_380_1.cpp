/*************************************************************************
	> File Name: OJ_380_1.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月14日 星期日 21时45分19秒
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
    int num;
    string s;
};

bool cmp(const node &a, const node &b) {
    if (a.s.size() == b.s.size()) {
        return a.s > b.s;
    }
    return a.s.size() > b.s.size();
}

int n; 
node bio[105];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> bio[i].s;
        bio[i].num = i;
    }
    sort(bio + 1, bio + n + 1, cmp);
    cout << bio[1].num << endl << bio[1].s << endl;

    return 0;
}
