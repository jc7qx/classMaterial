#include <stdio.h>
int cyclelen(int n);

int main()
{
    int i, j, max;
    while (scanf("%d %d", &i, &j) != EOF){
        max = 1;
        for (int n=i; n<=j; n++){
            int len = cyclelen(n);
            if (len > max) max = len;
        }
        printf("%d %d %d\n", i, j, max);
    }
    return 0;
}

int cyclelen(int n){
    int len=1;
    while (n != 1){
        if (n%2==0){
            n = n/2;
            len++;
        } else {
            n = 3*n+1;
            len++;
        }
    }
    return len;
}
