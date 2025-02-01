#include <stdio.h>

int main()
{
    int a, b, n;                            //宣告整數變數 a, b, n
    scanf("%d", &n);                        //讀取 n (幾組 a, b)
    for (int i=1; i<=n; i++){               // 讀取 n 組資料迴圈
        scanf("%d %d", &a, &b);             // 讀取 a, b
        int sum=0; // sum 歸0
        for (int j=a; j<=b; j++){           //檢查 a to b 每一個數
            if (j%2>0)                      //檢查是否為奇數？ 
                sum += j;                   //累積奇數和
        }
        printf("Case %d: %d\n", i, sum);    //列印結果 Case n: 累積和
    }

    return 0;
}
