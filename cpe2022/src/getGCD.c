#include <stdio.h>

int GCD(int a, int b){ //GCD 演算法
    if (a < b){
        int temp = a;
        a = b;
        b = temp;
    }
    int r=a%b;
    while (r > 0){
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}

int main()
{
    int a, b;                               //宣告 a, b 整數變數
    a =24; b = 36;
    int gcd = GCD(a, b);
    printf("GCD of %d and %d is %d\n", a, b, gcd);

    return 1;
}
