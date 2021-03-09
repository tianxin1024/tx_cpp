/*************************************************************************
	> File Name: OJ_284.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月08日 星期一 17时02分13秒
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
#define MAX_N 10000

struct Data {
    int p, d;
} data[MAX_N + 5];

bool cmp(const Data &a, const Data &b) {
    return a.d < b.d;
}

typedef pair<int, int> PIR;
set<PIR> s;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data[i].p >> data[i].d;
    }
    sort(data, data + n, cmp);
    for (int i = 0; i < n; i++) {
        if (s.size() < data[i].d) {
            s.insert(PIR(data[i].p, i));
        } else if (s.begin()->first < data[i].p) {
            s.erase(s.begin());
            s.insert(PIR(data[i].p, i));
        }
    }
    int ans = 0;
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        ans += iter->first;
    }
    cout << ans << endl;

    return 0;
}
