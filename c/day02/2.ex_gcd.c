/*************************************************************************
	> File Name: 2.ex_gcd.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Thu 03 Dec 2020 08:38:37 PM CST
 ************************************************************************/

#include<stdio.h>

int ex_gcd(int a, int b, int *x, int *y) {
    if (!b) {
        *x = 1, *y = 0;
        return a;
    }
    /*
    int xx, yy, ret = ex_gcd(b, a % b, &xx, &yy);
    *x = yy;
    *y = xx - a / b * yy;
    return ret;
    */
    int ret = ex_gcd(b, a % b, y, x);
    *y -= a / b * (*x);
}

int main() {
    int a, b, x, y;
    while (~scanf("%d%d", &a, &b)) {
        printf("ex_gcd(%d, %d) = %d\n", a, b, ex_gcd(a, b, &x, &y));
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, a * x + b * y);
    }
    return 0;
}
