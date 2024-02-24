#include <stdio.h>
int main(void)
{
    long long b;
    long long ans;
    int cnt = 0;
    int scan = scanf("%lld",&b);
    int ret;
    while(1) {
        cnt++;
        ans = cnt;
        for(int i = 1;i < cnt;i++) {
            ans *= cnt;
        }
        if(ans == b) {
            ret = cnt;
            break;
        }
        if(ans > b) {
            ret = -1;
            break;
        }
    }
    printf("%d\n",ret);
    return 0;
}