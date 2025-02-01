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
    int n, gcdsum;
    
    scanf("%d", &n);                        //讀取 n
    while (n != 0){                         // if n==0, 離開迴圈
        gcdsum=0;                           //gcdsum初始為0
        for (int i=1; i<n; i++)             // i = 1 to n-1
            for (int j=i+1; j<=n; j++)      // j = i+1 to n
                gcdsum = gcdsum+GCD(i, j);  //計算 (i,j) GCD 值
        printf("%d\n", gcdsum);             //列印GCD總和
        scanf("%d", &n);                    //讀取下一個 n
    }
    return 1;
}
