#include <stdio.h>
int main(void)
{
    int fibo[100];
    int n;
    printf(">");
    scanf("%d",&n);

    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<n;i++) {
        fibo[i] = fibo[i-2] + fibo[i-1];
    }
    for(int i=0;i<n;i++) {
        printf("%d ",fibo[i]);
    }
    printf("\n");
    return 0;
}