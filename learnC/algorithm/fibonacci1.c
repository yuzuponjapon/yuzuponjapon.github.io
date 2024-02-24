#include <stdio.h>
int fibo(int n)
{
    static int memo[2][100];
    static int cnt;
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        for(int i=cnt;i>0;i--) {
            if(n == memo[0][i]) return memo[1][i];
        } 
        int r = fibo(n-1) + fibo(n-2);
        memo[0][cnt] = n;
        memo[1][cnt] = r;
        cnt++;
        return r;
    }
}
int main(void)
{
    int n;
    printf(">");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        printf("%d ",fibo(i));
    }
    return 0;
}