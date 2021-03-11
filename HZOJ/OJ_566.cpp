/*************************************************************************
	> File Name: OJ_566.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月11日 星期四 14时29分25秒
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

    int n, m, count = 0, num[5005];
    string str_name[1005];
    string ans[100][500];
    map<string, int> mmap;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        if (mmap[s1] == 0) {
            count++;
            mmap[s1] = count;
            str_name[count] = s1;
        }
        int x = mmap[s1];
        ans[x][num[x]] = s2;
        num[x]++;
    }
    for (int i = 1; i <= n; i++) {
        cout << str_name[i];
        int x = mmap[str_name[i]];
        for (int j = 0; j < num[i]; j++) {
            cout << " " << ans[x][j];
        }
        cout << endl;
    }

    return 0;
}
