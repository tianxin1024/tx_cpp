/*************************************************************************
	> File Name: OJ_175.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月22日 星期一 08时33分39秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int N, x, score[4] = {0};
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x >= 90 && x <= 100) {
            score[0]++;
        } else if (x >= 80 && x <= 89) {
            score[1]++;
        } else if (x >= 60 && x <= 79) {
            score[2]++;
        } else {
            score[3]++;
        }
    }
    cout << "You "  << score[0] << endl;
    cout << "Liang " << score[1] << endl;
    cout << "Zhong " << score[2] << endl;
    cout << "Cha " << score[3] << endl;

    return 0;
}

