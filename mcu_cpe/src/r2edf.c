#include <stdio.h>

int main()
{
    int i, j, n=1;
    while (scanf("%d %d", &i, &j) != EOF){
        printf("%d --> %d , %d\n", n, i, j);
        n++;
    }
    printf("End of File!!!\n");
    return 0;
}
