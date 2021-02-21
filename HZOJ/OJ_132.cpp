/*************************************************************************
	> File Name: OJ_132.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 11时45分48秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, v;
    cin >> n;
    long long int ans = 1;
    for (int i = 0; i < n; i++) {
        cin >> v;
        ans *= v; 
    }
    cout << ans << endl;
    return 0;
}

