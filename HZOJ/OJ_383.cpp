/*************************************************************************
	> File Name: OJ_383.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月25日 星期四 20时28分55秒
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

int main() {
    int x, y, n;
    cin >> x >> y >> n;
    queue<int> man, woman;
    for (int i = 1; i <= x; i++) {
        man.push(i);
    }
    for (int i = 1; i <= y; i++) {
        woman.push(i);
    }
    for (int i = 1; i <= n; i++) {
        cout << man.front() << " " << woman.front() << endl;
        man.push(man.front());
        man.pop();
        woman.push(woman.front());
        woman.pop();
    }

    return 0;
}
