/*************************************************************************
	> File Name: OJ_261.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月01日 星期一 13时43分48秒
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

long long sum[1005];
long long f[1005];

int main() {
    int n;
    f[0] = 0x8000000000000000LL;
    char c;
    stack<long long> s1, s2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c;
        switch (c) {
            case 'I': {
                long long x;
                int ind;
                cin >> x;
                s1.push(x);
                ind = s1.size();
                sum[ind] = sum[ind - 1] + x;
                f[ind] = max(f[ind - 1], sum[ind]);
            } break;
            case 'D': {
                if (!s1.empty()) s1.pop();
            } break;
            case 'L': {
                if (s1.empty()) break;
                s2.push(s1.top());
                s1.pop();
            } break;
            case 'R': {
                if (s2.empty()) break;
                s1.push(s2.top());
                int ind = s1.size();
                sum[ind] = sum[ind - 1] + s2.top();
                f[ind] = max(f[ind - 1], sum[ind]);
            } break;
            case 'Q': {
                int k;
                cin >> k;
                cout << f[k] << endl;
            } break;
        }
    }

    return 0;
}
