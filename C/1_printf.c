/*************************************************************************
	> File Name: 1_printf.c
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月03日 星期三 18时04分28秒
 ************************************************************************/

#include <stdio.h>

void printf_d() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf(" has %d digits!\n", printf("%d", n));
        break;
    }
    return ;
}

void printf_s() {
    char str[100] = {0};
     // ^ 取非、除了
    while (scanf("%[^\n]s", str) != EOF) {
        getchar();
        printf(" has %d  chars!\n", printf("%s", str));
        break;
    }
    return ;
}

int main() {

    // 输入输出
    //printf_d();
    // 正则输出
    printf_s();
    return 0;
}
